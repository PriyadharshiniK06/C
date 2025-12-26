/*51. Write a program to find the sum of digits of a number.
Sample Input:
123
Sample Output:
6*/
#include<stdio.h>
int main(){
    int number,digit=0;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(;number>0;number/=10){
        digit+=(number%10);
    }
    printf("%d",digit);
}