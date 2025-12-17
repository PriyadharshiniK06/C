/*5. Write a program to read two numbers and display their difference.
Sample Input:
10 3
Sample Output:
7*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two numbers : ");
    scanf("%d %d",&a,&b);
    printf("%d",a-b);
}