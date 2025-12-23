/*18. Write a program to swap two numbers using a temporary variable.
Sample Input:
10 20
Sample Output:
20 10*/
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the two numbers : ");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d b=%d",a,b);
}