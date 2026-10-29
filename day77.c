//Write a program that reads text from input.TXT converts all letters to uppercase and writes the result to output.TXT.
#include <stdio.h>

int main() {
    char a[256];
    
    printf("Enter text: ");
    fgets(a, sizeof(a), stdin);

    FILE *f = fopen("input.TXT", "w");
    if (f == NULL) {
        return 1;
    }
    fputs(a, f);
    fclose(f);

    FILE *infile = fopen("input.TXT", "r");
    if (infile == NULL) {
        return 1;
    }

    FILE *outfile = fopen("output.TXT", "w");
    if (outfile == NULL) {
        fclose(infile);
        return 1;
    }

    int ch;
    while ((ch = fgetc(infile)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        fputc(ch, outfile);
    }

    fclose(infile);
    fclose(outfile);

    FILE *readfile = fopen("output.TXT", "r");
    if (readfile == NULL) {
        return 1;
    }

    printf("Output text: ");
    while ((ch = fgetc(readfile)) != EOF) {
        putchar(ch);
    }
    fclose(readfile);

    return 0;
}