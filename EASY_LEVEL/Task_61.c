/*61. Write a program to count even and odd digits in a number.
Sample Input:
1234
Sample Output:
Even: 2 Odd: 2*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    int digit;
    int counteven=0,countodd=0;
    for(;number>0;number/=10){
        digit=number%10;
        if(digit%2==0){
            counteven+=1;
        }
        else{
            countodd+=1;
        }
    }
    printf("Even: %d Odd : %d",counteven,countodd);
}