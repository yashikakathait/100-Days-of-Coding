//Write a program to find LCM of two numbers
#include <stdio.h>
int main() {
    int num1, num2, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
        {lcm = num1;}
    
        else
        {lcm = num2;}

    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0)
            {printf("LCM is: %d\n", lcm);
            break;}
        lcm++;
    }

    return 0;
}