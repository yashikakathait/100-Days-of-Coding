//Print initials of a name with surname displayed in full
#include <stdio.h>

int main() {
    char firstName[50];
    char lastName[50];

    printf("Enter first name and surname: ");
    scanf("%s %s", firstName, lastName);

    printf("%c. %s\n", firstName[0], lastName);

    return 0;
}