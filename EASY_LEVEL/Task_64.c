/*64. Write a program to check whether a number is a perfect number.
Sample Input:
6
Sample Output:
Perfect Number*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    int fact=1;
    for(int i=2;i<number;i++){
        if(number%i==0){
        fact*=i;}
    }
    if(fact==number){
        printf("Perfect Number");
    }
    else{
        printf("Not Perfect Number");
    }
}