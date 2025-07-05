#include <stdio.h>
int main() {
    int mat[2][4] = {{2,3,4,5},{2,5,6,7}};
    int m, n;

    for(m = 0; m < 2; m++) {
    	printf("The elements in the array: ");
        for(n = 0; n < 4; n++) {
        	
            printf("%d\t ", mat[m][n]);
        }
        printf("\n");
    }
    int rows = sizeof(mat) / sizeof(mat[0]);
    int cols = sizeof(mat[0]) / sizeof(mat[0][0]);
    printf("Rows: %d, Columns: %d\n", rows, cols);
    return 0;
}
