//Write a program to find product of odd digits of a number
#include <stdio.h>
int main() {
    int n, rem, prod = 1, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (n > 0) {
        rem = n % 10;
        if (rem % 2 != 0) {
            prod = prod * rem;
            flag = 1;
        }
        n = n / 10;
    }
    
    if (flag == 1) {
        printf("Product of odd digits: %d", prod);
    } else {
        printf("No odd digits found: 1");
    }
    return 0;
}