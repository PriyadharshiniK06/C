#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5, i;
    int *ptr;

    printf("Using value of n = %d\n", n);

    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Memory is not allocated\n");
        exit(0);
    } else {
        printf("Memory is allocated\n");
        for (i = 0; i < n; i++) {
            ptr[i] = i + 1;
        }

        printf("The elements are: ");
        for (i = 0; i < n; i++) {
            printf("%d ", ptr[i]);
        }
        printf("\n");
    }

    free(ptr); 
    return 0;
}
