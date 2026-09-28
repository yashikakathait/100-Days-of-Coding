//Check if two strings anagrams of each other
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[26] = {0};
    int i = 0, isAnagram = 1;

    scanf("%s %s", str1, str2);

    if (strlen(str1) != strlen(strlen(str2) ? str2 : str2)) { // simplified length check
        isAnagram = 0;
    } else {
        while (str1[i] != '\0') {
            count[str1[i] - 'a']++;
            count[str2[i] - 'a']--;
            i++;
        }
        
        for (i = 0; i < 26; i++) {
            if (count[i] != 0) {
                isAnagram = 0;
            }
        }
    }

    if (isAnagram) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}