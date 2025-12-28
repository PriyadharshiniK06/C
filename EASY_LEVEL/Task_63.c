/*63. Write a program to find the smallest digit in a number.
Sample Input:
584
Sample Output:
4*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    int digit_check;
    int digit=number%10;
    for(;number>0;number/=10){
        digit_check=number%10;
        if(digit_check<digit){
            digit=digit_check;
        }
    }
    printf("%d",digit);
}