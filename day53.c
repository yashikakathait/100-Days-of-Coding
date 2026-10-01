//Write a program to take an array of integers as input. Calculate the pivot index of this array. The pivot index is the index with the sum of all numbers strictly to the left of the index is equal to the sum of all number strictly to the index's right. If the index is on the left edge of the ray, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array . Print the left most pivot index. If no such index exists print -1.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    
    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int leftSum = 0;
    int rightSum = sum;
    int pivot = -1;

    for(int i = 0; i < n; i++) {
        rightSum -= arr[i];
        if(leftSum == rightSum) {
            pivot = i;
            break;
        }
        leftSum += arr[i];
    }

    printf("%d\n", pivot);
    return 0;
}