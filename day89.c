//Show that enums Store integers by printing assigned values.
#include <stdio.h>

enum Role {ADMIN = 1,
    USER = 2,
    GUEST = 3};

int main() {
    enum Role roles[] = {ADMIN, USER, GUEST};
    const char *names[] = {"ADMIN", "USER", "GUEST"};
    int value = sizeof(roles) / sizeof(roles[0]);

    for (int i = 0; i < value; i++) {
        printf("%s = %d\n", names[i], roles[i]);
    }

    return 0;
}