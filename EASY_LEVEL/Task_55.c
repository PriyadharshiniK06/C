/*55. Write a program to calculate power of a number without using library functions.
Sample Input:
2 3
Sample Output:
8*/
#include<stdio.h>
int main(){
    int number1,number2,result=1;
    printf("Enter the two numbers: ");
    scanf("%d %d",&number1,&number2);
    for(int i=1;i<=number2;i++){
        result*=number1;
    }
    printf("%d",result);
}