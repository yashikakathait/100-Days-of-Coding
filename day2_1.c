// Write a program to calculate the area and perimeter of a rectangle given it's length and breadth
#include <stdio.h>
int main()
{
    int l; int b;
    printf("Give length of rectangle ");
    scanf("%d",&l);
    printf("Give breadth ");
    scanf("%d",&b);
    int ar=l*b; int prm=2*(l+b);
    printf("The area is %d and perimeter is %d", ar, prm);
    return 0;
}