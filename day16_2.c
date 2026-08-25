//Write a program to check if a number is a palindrome
#include <stdio.h>
int main() {
    int n, rev = 0, temp;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (temp = n; temp > 0; temp /= 10) {
        rev = rev * 10 + (temp % 10);
    }
    
    if (n == rev) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    
    return 0;
}