#include<stdio.h>
#include<string.h>

void a(char name[], int std, int total) {
    printf("My name: %s, My standard: %d, My total mark: %d\n", name, std, total);
}

int main() {
    char names[5][20] = {"Priya", "yaazhu", "ramya", "Rose", "riya"};
    int marks[5] = {360, 345, 350, 330, 355};
    int maxIndex = 0;

    for(int i = 0; i < 5; i++) {
        a(names[i], 10, marks[i]);
        if(marks[i] > marks[maxIndex]) {
            maxIndex = i;
        }
    }

    printf("%s has the highest marks: %d\n", names[maxIndex], marks[maxIndex]);

    return 0;
}
