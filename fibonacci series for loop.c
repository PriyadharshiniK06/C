#include <stdio.h>

int main() {
    int start, end;
    int a = 0, b = 1, fib;

    printf("Enter the starting range: ");
    scanf("%d", &start);
    printf("Enter the ending range: ");
    scanf("%d", &end);

    printf("Fibonacci numbers between %d and %d are:\n", start, end);

    for (int i = 0; a <= end; i++) {
        if (a >= start)
            printf("%d ", a);
        fib = a + b;
        a = b;
        b = fib;
    }

    return 0;
}
