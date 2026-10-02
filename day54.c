//Write a program to take a positive integer n as input and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusive. Print the pivot integer x. If no such integer exists print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    
    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    int total_sum = n * (n + 1) / 2;
    
    int root = (int)sqrt(total_sum);
    
    int pivot = -1;
    if (root * root == total_sum) {
        pivot = root;
    }

    printf("Pivot integer x: %d\n", pivot);

    return 0;
}