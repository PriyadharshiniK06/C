/*52. Write a program to reverse a number entered by the user.
Sample Input:
123
Sample Output:
321*/
#include<stdio.h>
int main(){
    int number,reverse=0;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(;number>0;number/=10){
        reverse=(reverse*10)+(number%10);
    }
    printf("%d",reverse);
}