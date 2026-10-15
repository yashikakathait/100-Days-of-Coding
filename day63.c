//Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
    {scanf("%d", &a[i]);}

    printf("Enter k: ");
    scanf("%d", &k);
    
    for (int i = 0; i < k; i++)
    {   int m = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[m]) {m = j;}
        }
        int t = a[i];
        a[i] = a[m];
        a[m] = t;
    }
    
    printf("%d\n", a[k - 1]);
    return 0;
}
