//Check if matrix is symmetric
#include <stdio.h>
int main() {
    int n, i, j;
    int a[100][100];
    int find = 1;

    printf("Enter matrix size: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {scanf("%d", &a[i][j]);}
        }

    for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(a[i][j] != a[j][i])
                {find = 0;
                break;}
            }
        }

    if(find)
    {printf("Symmetric\n");}
    
    else
    {printf("Not Symmetric\n");}

    return 0;
}