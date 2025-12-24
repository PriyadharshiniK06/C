/*45. Write a program to find the sum of first N natural numbers.
Sample Input:
5
Sample Output:
15*/
#include<stdio.h>
int main(){
    int number,sum=0;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
         sum+=i;
    }
    printf("%d ",sum);
}