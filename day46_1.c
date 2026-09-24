//Remove vowels from a string
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    int j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        char c = str[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';

    printf("%s\n", str);

    return 0;
}