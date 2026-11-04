//Create an enum for months and print how many days each month has.
#include <stdio.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m;
    
    printf("Enter month number (1-12): ");
    scanf("%d", &m);
    
    if (m >= JANUARY && m <= DECEMBER) {
        printf("Days: %d\n", days[m]);
    } else {
        printf("Invalid month\n");
    }
    
    return 0;
}