//Find the first repeating lowercase alphabet in string
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    int j = 0;
    char found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            for (j = i + 1; str[j] != '\0'; j++) {
                if (str[i] == str[j]) {
                    found = str[i];
                    break;
                }
            }
            if (found != 0) {
                break;
            }
        }
    }

    if (found != 0) {
        printf("%c\n", found);
    } else {
        printf("No repeating lowercase alphabet found\n");
    }

    return 0;
}