
%{
    #include <stdio.h>
    #include <stdlib.h>

    unsigned long charCount = 0;
    unsigned long wordCount = 0;
    unsigned long lineCount = 0;

    char **fileList;
    unsigned currentFile = 0;
    unsigned nFiles;
    unsigned long totalLC = 0;
    unsigned long totalWC = 0;
    unsigned long totalCC = 0;

    #undef yywrap
%}

word [^\t\n]+
eol \n

%%  
{word} { wordCount++; charCount += yyleng; }
{eol}  { lineCount++; charCount++; }
.      { charCount++; }
%%

int yywrap() {
    FILE *file;

    if (currentFile > 0 && nFiles > 1) { 
        printf("| %-20s | %8lu | %8lu | %8lu |\n", fileList[currentFile - 1], lineCount, wordCount, charCount); 
        totalCC += charCount; 
        totalWC += wordCount; 
        totalLC += lineCount; 
        charCount = wordCount = lineCount = 0; 
        fclose(yyin); 
    }

    if (currentFile < nFiles) { 
        file = fopen(fileList[currentFile], "r");

        if (!file) { 
            fprintf(stderr, "The file %s cannot be opened. Skipping...\n", fileList[currentFile]); 
            currentFile++; 
            return (currentFile < nFiles) ? yywrap() : 1;
        } 
        
        yyin = file; 
        currentFile++; 
        return 0; 
    } 
    return 1; 
}

int main(int argc, char **argv) {
    fileList = argv + 1;
    nFiles = argc - 1;

    if (nFiles == 0) {
        fprintf(stderr, "Usage: %s <file1> [file2 ...]\n", argv[0]);
        return 1;
    }

    currentFile = 0;
    printf("+----------------------+----------+----------+----------+\n");
    printf("| Filename             | Lines    | Words    | Chars    |\n");
    printf("+----------------------+----------+----------+----------+\n");

    yywrap();
    while (!yywrap()) {
        yylex();
    }

    if (nFiles > 1) {
        printf("+----------------------+----------+----------+----------+\n");
        printf("| %-20s | %8lu | %8lu | %8lu |\n", "Total", totalLC, totalWC, totalCC);
    }

    printf("+----------------------+----------+----------+----------+\n");
    return 0;
}
