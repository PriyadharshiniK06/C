/*56. Write a program to print the Fibonacci series up to N terms.
Sample Input:
5
Sample Output:
0 1 1 2 3*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    int a=0,b=1;
    for(int i=0;i<number;i++){
        printf("%d ",a);
        int c=a+b;
        a=b;
        b=c;
    }
}