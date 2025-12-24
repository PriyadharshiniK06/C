/*50. Write a program to count the number of digits in a given number.
Sample Input:
12345
Sample Output:
5*/
#include<stdio.h>
int main(){
    int number,count=0;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(;number>0;number/=10){
         count+=1;
    }
    printf("%d ",count);
}