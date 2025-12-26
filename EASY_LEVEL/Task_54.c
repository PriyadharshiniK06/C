/*54. Write a program to check whether a number is an Armstrong number.
Sample Input:
153
Sample Output:
Armstrong Number*/
#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int number,original;
    printf("Enter the number: ");
    scanf("%d",&number);
    original=number;
    char str[100];
    sprintf(str,"%d",original);
    size_t length=strlen(str);
    int digit=0,digit_power;
    for(;number>0;number/=10){
        digit_power=pow((number%10),length);
        digit+=digit_power;
    }
    if(digit==original){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }

}