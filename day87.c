//Create an enum for user roles (ADMIN, GUEST, USER) and display messages based on role.
#include <stdio.h>
#include <string.h>

enum role {ADMIN, GUEST, USER};

int main() {
    char input[20];
    scanf("%s", input);

    enum role role;
    if (strcmp(input, "ADMIN") == 0)
        {role = ADMIN;}
    else if (strcmp(input, "GUEST") == 0)
        {role = GUEST;}
    else
        {role = USER;}

    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
    }

    return 0;
}