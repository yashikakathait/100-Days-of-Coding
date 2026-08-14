//Write a program to input time in seconds and convert it to hours:minutes:seconds format
#include <stdio.h>
int main()
{ printf("Give time in seconds = ");
int totals, remainders, h, m, s;
scanf("%d", &totals);
h = totals/3600;
remainders=totals%3600;
m=remainders/60;
s=remainders%60;
printf("Time is %d : %d : %d", h,m,s);
return 0;
}