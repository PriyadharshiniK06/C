#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5, i;
    int* ptr;

    printf("Allocating memory for %d integers...\n", n);

    ptr = (int*)calloc(n, sizeof(int));
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

        n = 10;
        printf("Reallocating memory to hold %d integers...\n", n);

        int* temp = realloc(ptr, n * sizeof(int));
        if (temp == NULL) {
            printf("Reallocation failed\n");
            free(ptr);
            exit(0);
        }
        ptr = temp;
        printf("Memory reallocation successful\n");

        for (i = 5; i < n; i++) {
            ptr[i] = i + 1;
        }

        printf("The updated elements are: ");
        for (i = 0; i < n; i++) {
            printf("%d ", ptr[i]);
        }
        printf("\n");

        free(ptr); 
    }

    return 0;
}
