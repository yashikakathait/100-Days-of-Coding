//Write a program to swap first and last digit of a number
#include <stdio.h>
int main() {
    int n, temp, first, last, divisor = 1, middle, swapped;
    printf("Enter number: ");
    scanf("%d", &n);
    
    if (n < 10)
        {swapped = n;}
    else
        {last = n % 10;
        temp = n;
        
        while (temp >= 10)
            {temp = temp / 10;
            divisor = divisor * 10;}
    
        first = temp;
        
        middle = n % divisor;
        middle = middle / 10;
        
        swapped = last * divisor + middle * 10 + first;}
    
    printf("After swapping: %d", swapped);
    return 0;
}