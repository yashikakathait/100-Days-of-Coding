//Change the date format from dd/04/yyyy to dd/april/yyyy
#include <stdio.h>

int main() {
    int d, m, y;
    char *months[] = {"", "january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
    scanf("%d/%d/%d", &d, &m, &y);
    printf("%02d/%s/%d\n", d, months[m], y);
    return 0;
}