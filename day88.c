//Print all enum names and integer values using a loop.
#include <stdio.h>

enum color {
    RED,
    GREEN,
    BLUE,
    YELLOW
};

int main() {
    char *name[] = {"RED", "GREEN", "BLUE", "YELLOW"};

    int colors = sizeof(name) / sizeof(name[0]);

    for (int i = 0; i < colors; i++)
        {printf("%s = %d\n", name[i], i);}

    return 0;
}