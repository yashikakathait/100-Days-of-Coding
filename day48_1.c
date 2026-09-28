//Check if one string is rotation of other
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // 1. Check if lengths are different
    if (strlen(str1) != strlen(str2)) {
        printf("NOT rotations of each other.\n");
        return 0;
    }

    // 2. Concatenate str1 with itself and store in temp
    strcpy(temp, str1);
    strcat(temp, str1);

    // 3. Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL) {
        printf("ARE rotations of each other.\n");
    } else {
        printf("NOT rotations of each other.\n");
    }

    return 0;
}