/*16. Write a program to check whether a given number is positive, negative, or zero.
Sample Input:
-5
Sample Output:
Negative*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    if(number>0){
        printf("Positive");
    }
    else if(number==0){
        printf("Zero");
    }
    else{
        printf("Negative");
    }
}