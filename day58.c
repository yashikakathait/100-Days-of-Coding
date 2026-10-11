//Write a program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32 bit integer.
#include <stdio.h>
void solve(int a[], int n, int r[]) {
    r[0] = 1;
    for (int i = 1; i < n; i++) {
        r[i] = r[i - 1] * a[i - 1];
    }
    
    int t = 1;
    for (int i = n - 1; i >= 0; i--) {
        r[i] *= t;
        t *= a[i];
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int a[n];
    int r[n];
    
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    solve(a, n, r);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", r[i]);
    }
    printf("\n");
    
    return 0;
}