//Write a program to take a sorted array arr[] an integer X as input. Find the index (0 based) of the smallest element in arr[] that is greater than or equal to X and print it. This element is called the ceil of X. If such an element does not exist print -1. Note in case of multiple occurrences of ceil of X return the index of the first occurrence.
#include <stdio.h>

int find_ceil_index(int arr[], int n, int X) {
    int low = 0, high = n - 1;
    int ans = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] >= X) {
            ans = mid;        // Potential ceil found
            high = mid - 1;   // Search left to find the first occurrence
        } else {
            low = mid + 1;    // Element is too small, search right
        }
    }
    
    return ans;
}

int main() {
    int n, X;
    
    // 1. Take array size from user
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }
    
    // 2. Declare array using VLA (C99 and later)
    int arr[n];
    
    // 3. Take sorted elements from user
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 4. Take target value X from user
    printf("Enter the value of X: ");
    scanf("%d", &X);
    
    // 5. Find and print the result
    int result = find_ceil_index(arr, n, X);
    printf("Ceil Index: %d\n", result);
    
    return 0;
}