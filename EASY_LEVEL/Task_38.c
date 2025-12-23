/*38. Write a program to check whether a number is a multiple of 10.
Sample Input:
70
Sample Output:
Yes*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    if(number%10==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}