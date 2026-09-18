//Perform diagonal traversal of a matrix
#include <stdio.h>
int main() {
    int r, c, i, j, s;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    int mat[10][10];
    printf("Enter elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Diagonal traversal:\n");
    for(s = 0; s <= r + c - 2; s++)
    {    if(s % 2 == 0)
        {    for(i = s; i >= 0; i--)
            {
                j = s - i;
                if(i < r && j < c)
                {printf("%d ", mat[i][j]);}
            }
        }
        else
        {   for(j = s; j >= 0; j--)
            {    i = s - j;
                if(i < r && j < c)
                    {printf("%d ", mat[i][j]);}
            }
        }
    }
    printf("\n");
    return 0;
}