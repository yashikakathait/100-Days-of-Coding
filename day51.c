//Write a program to take a sorted array (say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1,-1 if the target is not present.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter numbers ");
    if (scanf("%d", &n) != 1) return 0;
    
    int *nums = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int target;
    printf("Enter target ");
    scanf("%d", &target);

    int f = -1, l = -1;
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            f = mid;
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    low = 0;
    high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            l = mid;
            low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("%d,%d\n", f, l);
    free(nums);
    return 0;
}