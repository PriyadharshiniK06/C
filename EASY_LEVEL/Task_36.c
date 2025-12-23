/*36. Write a program to find the absolute value of a number.
Sample Input:
-10
Sample Output:
10*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int b=abs(a);
    printf("%d",b);
}