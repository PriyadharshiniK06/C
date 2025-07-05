#include <stdio.h>

enum var {
    Low,
    Medium,
    High
};

int main() {
    enum var g = Medium;  
    printf("The value is: %d\n", g);  
    return 0;
}
