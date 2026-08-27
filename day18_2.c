//Write a program to find hcf of two numbers
#include <stdio.h>
int main() {
    int n1, n2, a, b, t;
    
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    
    while (n2 != 0) {
        t = n2;
        n2 = n1 % n2;
        n1 = t;
    }
    
    printf("The HCF is: %d\n", n1);
    
    return 0;
}