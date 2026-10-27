//Open an existing file in append mode and allow the user to enter a new line of text, append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char str[100];

    printf("Enter filename: ");
    scanf("%s", filename);
    getchar();

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(str, sizeof(str), stdin);

    fputs(str, fp);
    fclose(fp);

    printf("Text appended successfully.\n");

    return 0;
}