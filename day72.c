//Write a C program that opens an existing file (eg. info.txt) and reads its contents using fgets(). The program should print all the lines to the console until end of file is reached.
#include <stdio.h>

int main() {
    char filename[100];

    printf("Enter file name: ");
    scanf("%s", filename);

    FILE *f = fopen(filename, "r");

    if (f == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    char line[256];

    while (fgets(line, sizeof(line), f) != NULL) {
        printf("%s", line);
    }

    fclose(f);

    return 0;
}