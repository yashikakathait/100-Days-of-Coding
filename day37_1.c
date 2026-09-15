//Find sum of each row in a matrix and store it in an array
#include <stdio.h>
int main() {
    int r, c, i, j;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    int a[10][10];
    int sum[10];
    
    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        {for(j = 0; j < c; j++)
            {scanf("%d", &a[i][j]);}}
    
    for(i = 0; i < r; i++)
        {sum[i] = 0;
        for(j = 0; j < c; j++)
        {sum[i] = sum[i] + a[i][j];}}
    
    for(i = 0; i < r; i++)
        {printf("Row %d sum = %d\n", i + 1, sum[i]);}
    
    return 0;
}