/*21. Write a program to find the largest of two numbers.
Sample Input:
15 20
Sample Output:
20*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two numbers : ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
}