//Write a program to find 1's complement of a binary number and print it 
#include <stdio.h>
int main() {
    char b[100];
    int i;
    printf("Enter a binary number: ");
    scanf("%s", b);
    
    for (i = 0; b[i] != '\0'; i++)
        {if (b[i] == '0')
            {b[i] = '1';}
        else if (b[i] == '1') {
            {b[i] = '0';}}
    }
    
    printf("1's complement: %s", b);
    return 0;
}