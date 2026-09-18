//Check if the elements on diagonal matrix are distinct
#include <stdio.h>
int main() {
    int n, i, j, check = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int mat[10][10];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(mat[i][i] == mat[j][j]) {
                check = 0;
                break;
            }
        }
    }
    if(check == 1) {
        printf("Distinct.\n");
    } else {
        printf("Not distinct.\n");
    }
    return 0;
}