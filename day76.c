//Ask the user for a file name. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message otherwise read and display its content.
#include <stdio.h>

int main() {
    char filename[100];
    FILE *file;
    char ch;

    printf("Enter file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: Could not open file.\n");
    } else {
        while ((ch = fgetc(file)) != EOF) {
            putchar(ch);
        }
        fclose(file);
    }

    return 0;
}