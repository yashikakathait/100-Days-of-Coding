//Write a program to take a string input, change it to a sentence case.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int caps = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (caps && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
            caps = 0;
        } else if (caps && str[i] >= 'A' && str[i] <= 'Z') {
            caps = 0;
        } else if (!caps && str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }

        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            caps = 1;
        }
        i++;
    }

    printf("%s", str);

    return 0;
}