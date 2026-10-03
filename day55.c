//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than  \(\lfloor n/2 \rfloor\)  times. Print -1 if no such element exists. Note: majority element is not necessarily the element that is present most number of times.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1) return 0;
    
    int nums[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int candidate = -1;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    
    int verify_count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            verify_count++;
        }
    }
    
    if (verify_count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }
    
    return 0;
}