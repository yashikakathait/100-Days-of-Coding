//Write a program to calculate library fine based on late days as follows:
//First 5 days: Rs2/day
//Next 5 days:Rs4/day
//Next 20 days:Rs6/day
//More than 30 days:Membership cancelled
#include <stdio.h>
int main()
{int d; int f;
    printf("Enter number of due days ");
    scanf("%d", &d);
    if (d <= 5) {f = d * 2; printf("Total Fine: Rs %d\n", f);}
    else if (d <= 10) {f = (5 * 2) + ((d - 5) * 4); printf("Total Fine: Rs %d\n", f);}
    else if (d <= 30) {f = (5 * 2) + (5 * 4) + ((d - 10) * 6); printf("Total Fine: Rs %d\n", f);}
    else {printf("Membership cancelled!\n");}
return 0;}

   