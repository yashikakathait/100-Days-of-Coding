//Find the transpose of a matrix
#include <stdio.h>
int main() {
    int r, c, i, j;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    int a[10][10];
    int t[10][10];
    
    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        {for(j = 0; j < c; j++)
            {scanf("%d", &a[i][j]);}}
    
    for(i = 0; i < r; i++)
        {for(j = 0; j < c; j++)
            {t[j][i] = a[i][j];}}
    
    printf("Transpose matrix:\n");
    for(i = 0; i < c; i++)
        {for(j = 0; j < r; j++)
            {printf("%d ", t[i][j]);}
        printf("\n");}
    
    return 0;
}