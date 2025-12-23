/*25. Write a program to check whether a number is divisible by both 3 and 7.
Sample Input:
21
Sample Output:
Yes*/
#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a%3==0 && a%7==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}