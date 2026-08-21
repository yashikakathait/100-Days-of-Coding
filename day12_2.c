//Write a program to calculate electricity bill bases on units consumed:
//First 100 units-Rs5/unit
//Next 100 units-Rs7/unit
//Next 100 units-Rs10/unit
//Above - Rs12/unit
#include <stdio.h>
int main()
{int u;
    printf("Enter number of units consumed ");
    scanf("%d", &u);
    if(u<=100) {int b=5*u; printf("Pay %d", b);}
    else if(u>100 && u<=200) {int b2=(100*5)+((u-100)*7); printf("Pay %d",b2);}
    else if(u>200 && u<=300) {int b3=(100 * 5) + (100 * 7) + ((u - 200) * 10); printf("Pay %d",b3);}
    else {int b4=(100 * 5) + (100 * 7) + (100 * 10) + ((u - 300) * 12); printf("Pay %d",b4);}
return 0;}