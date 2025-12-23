/*19. Write a program to swap two numbers without using a third variable.
Sample Input:
5 7
Sample Output:
7 5*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two numbers : ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);
}