//Write a program to take an integer array arr and an integer K as inputs. Print the maximum sum of all the subarrays of size K.
#include <stdio.h>
int solve(int a[], int n, int k) {
    int s = 0;
    for (int i = 0; i < k; i++) {
        s += a[i];
    }
    int m = s;
    for (int i = k; i < n; i++) {
        s += a[i] - a[i - k];
        if (s > m) {
            m = s;
        }
    }
    return m;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter elements of array: ");
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int k;
    printf("Enter k: ");
    scanf("%d", &k);
    
    int r = solve(a, n, k);
    printf("%d\n", r);
    
    return 0;
}