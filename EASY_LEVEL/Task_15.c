/*15. Write a program to check whether a given number is even or odd.
Sample Input:
9
Sample Output:
Odd*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    if(number%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}