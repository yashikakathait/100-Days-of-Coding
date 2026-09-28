//Reverse each word in a sentence without changing the word order
#include <stdio.h>
#include <string.h>

void reverseWord(char *str, int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    int start = 0;
    int length;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
    length = strlen(str);

    for (int i = 0; i <= length; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("Result: %s\n", str);

    return 0;
}