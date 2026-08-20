//Write a program to find profit and loss percentage given cost price and selling price
#include <stdio.h>
#include <math.h>
int main()
{float cp; float sp;
    printf("Enter cost price ");
    scanf("%f", &cp);
    printf("Enter selling price ");
    scanf("%f", &sp);
    
    if (cp>sp)
    {float lp=((cp-sp)/cp)*100;
    printf("%.2f loss",lp);}
    
    else if (sp>cp)
    {float pp=((sp-cp)/cp)*100;
    printf("%.2f profit",pp);}
    
    else {printf("No profit, no loss");}

return 0;}