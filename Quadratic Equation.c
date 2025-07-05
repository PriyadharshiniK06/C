#include <stdio.h>

int main() {
    int a, b, c, x;

    printf("Enter any three numbers (a, b, c): ");
    scanf("%d%d%d", &a, &b, &c);

    x = (b * b) - (4 * a * c);
    printf("Discriminant (x) = %d\n", x);

    switch (x > 0 ? 1 : (x == 0 ? 0 : -1)) {
        case 1:
            printf("Roots are real and distinct.\n");
            break;
        case 0:
            printf("Roots are real and equal.\n");
            break;
        case -1:
            printf("Roots are imaginary.\n");
            break;
    }

    return 0;
}
