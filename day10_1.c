//Write a program to classify a triangle as equialateral, isoceles or scalene based on side lengths
#include <stdio.h>
int main()
{int a; int b; int c;
    printf("Give sides of triangle ");
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && b==c) {printf("Equilateral triangle");}
    else if (a==b || b==c || c==a) {printf("Isoceles triangle");}
    else {printf("Scalene triangle");}
return 0;}