#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;

    // Step 1: Malloc allocation
    printf("Enter the number of elements (initial allocation): ");
    scanf("%d", &n);
    printf("Number of elements entered: %d\n", n);

    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    } else {
        printf("Memory successfully allocated using malloc.\n");
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }
        printf("The elements are: ");
        for (i = 0; i < n; ++i) {
            printf("%d ", ptr[i]);
        }
        printf("\n");
        free(ptr); // Always free when done before reusing
    }

    // Step 2: Calloc allocation
    n = 5;
    printf("Allocating memory using calloc for %d elements.\n", n);
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    } else {
        printf("Memory successfully allocated using calloc.\n");
        for (i = 0; i < n; i++) {
            ptr[i] = i + 1;
        }
        printf("The elements are: ");
        for (i = 0; i < n; i++) {
            printf("%d ", ptr[i]);
        }
        printf("\n");
    }

    // Step 3: Realloc
    printf("Enter new number of elements to reallocate: ");
    scanf("%d", &n);

    int *temp = realloc(ptr, n * sizeof(int));
    if (temp == NULL) {
        printf("Reallocation failed.\n");
        free(ptr);
        exit(0);
    }
    ptr = temp;
    printf("Memory successfully reallocated to %d elements.\n", n);

    for (i = 5; i < n; i++) {
        ptr[i] = i + 1;
    }

    printf("The updated elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);
    return 0;
}
