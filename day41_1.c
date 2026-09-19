//Count characters in a string without using built in length function
#include <stdio.h>
int main() {
    char s[100];
    int i = 0;

    scanf("%s", s);

    while (s[i] != '\0') {
        i++;
    }

    printf("%d\n", i);

    return 0;
}