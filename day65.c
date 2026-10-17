//Write a program to take two strings S and T as inputs (assume all characters are lowercase). The task to determine if S and T are valid anagrams, meaning they contain the same characters with the same frequencies. Print 'anagram' if they are otherwise 'not anagram'.
#include <stdio.h>
#include <string.h>
int main() {
    char S[100], T[100];
    int count[26] = {0};
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", S);

    printf("Enter second string: ");
    scanf("%s", T);

    if (strlen(S) != strlen(T)) {
        printf("Not anagram\n");
        return 0;
    }

    while (S[i] != '\0') {
        count[S[i] - 'a']++;
        count[T[i] - 'a']--;
        i++;
    }

    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not anagram\n");
            return 0;
        }
    }

    printf("anagram\n");
    return 0;
}