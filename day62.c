//Write a program to take an integer array arr as input. The task is to find the maximum sum of any continuous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative print the largest (least negative) element.
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int m = arr[0];
    int c = arr[0];
    
    for (int i = 1; i < n; i++) {
        c = (arr[i] > c + arr[i]) ? arr[i] : c + arr[i];
        m = (c > m) ? c : m;
    }
    
    printf("%d\n", m);
    
    return 0;
}