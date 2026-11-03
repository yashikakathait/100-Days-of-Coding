//Define an enum for traffic lights, (red, yellow, green), and print, 'stop', 'wait' or 'go' based on its value.
#include <stdio.h>

enum colour {red, yellow, green};

int main() {
    enum colour light = yellow;

    if (light == red) {
        printf("Stop\n");
    } else if (light == yellow) {
        printf("Wait\n");
    } else if (light == green) {
        printf("Go\n");
    }

    return 0;
}