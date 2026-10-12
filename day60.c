//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>
int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);

    int q[n];
    int head = 0, tail = -1;

    for (int i = 0; i < n; i++) {
        while (head <= tail && q[head] <= i - k) {
            head++;
        }
        while (head <= tail && arr[q[tail]] <= arr[i]) {
            tail--;
        }
        q[++tail] = i;
        if (i >= k - 1) {
            printf("%d ", arr[q[head]]);
        }
    }
    printf("\n");
    return 0;
}