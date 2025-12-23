/*20. Write a program to display the size of int, float, double, and char.
Sample Input:
No input
Sample Output:
4 4 8 1*/
#include<stdio.h>
int main(){
    size_t integer=sizeof(int);
    size_t floats=sizeof(float);
    size_t doubles=sizeof(double);
    size_t character= sizeof(char);
    printf("%zu %zu %zu %zu",integer,floats,doubles,character);
}