//Read a text file and count the total number of characters, words and lines. A word is defined as a sequence of non-space characters, separated by spaces or new lines.
#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int state = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        if (ch == '\n') {
            lines++;
        }
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r') {
            state = 0;
        } else if (state == 0) {
            state = 1;
            words++;
        }
    }

    if (characters > 0 && lines == 0) {
        lines = 1;
    }

    fclose(fp);

    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}