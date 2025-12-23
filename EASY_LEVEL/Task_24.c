/*24. Write a program to check whether a number is divisible by 5.
Sample Input:
25
Sample Output:
Divisible*/
#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a%5==0){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
}