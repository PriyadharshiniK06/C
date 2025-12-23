/*40. Write a program to determine whether a given number is divisible by 11.
Sample Input:
121
Sample Output:
Divisible*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    if(number%11==0){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
}