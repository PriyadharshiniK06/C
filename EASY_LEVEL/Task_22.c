/*22. Write a program to find the smallest of two numbers.
Sample Input:
8 3
Sample Output:
3*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two numbers : ");
    scanf("%d %d",&a,&b);
    if(a<b){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
}