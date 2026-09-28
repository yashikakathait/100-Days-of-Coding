//Find longest world in sentence
#include <stdio.h>
#include <string.h>

int main() {
    char line[200], word[50], longest[50];
    int max_len = 0, i = 0;

    fgets(line, sizeof(line), stdin);

    while (sscanf(line + i, "%s", word) == 1) {
        if (strlen(word) > max_len) {
            max_len = strlen(word);
            strcpy(longest, word);
        }
        i += strlen(word);
        while (line[i] == ' ' || line[i] == '\t' || line[i] == '\n') {
            i++;
        }
    }

    printf("Longest word: %s\n", longest);
    return 0;
}