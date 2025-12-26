/*53. Write a program to check whether a number is a palindrome.
Sample Input:
121
Sample Output:
Palindrome*/
#include<stdio.h>
int main(){
    int number,reverse=0,original;
    printf("Enter the number: ");
    scanf("%d",&number);
    original=number;
    for(;number>0;number/=10){
        reverse=(reverse*10)+(number%10);
    }
    if(reverse==original){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}