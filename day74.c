//Take two file names from the user, a source file and a destination file. Copy all content from source file to the destination file using fgetc() and fputc().
#include <stdio.h>
#include <stdlib.h>

int main() {
    char src_file[100], dest_file[100];
    FILE *src, *dest;
    int ch;

    printf("Enter source file name: ");
    scanf("%s", src_file);

    printf("Enter destination file name: ");
    scanf("%s", dest_file);

    src = fopen(src_file, "r");
    if (src == NULL) {
        printf("Error opening source file.\n");
        exit(1);
    }

    dest = fopen(dest_file, "w");
    if (dest == NULL) {
        printf("Error opening destination file.\n");
        fclose(src);
        exit(1);
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    fclose(src);
    fclose(dest);

    return 0;
}