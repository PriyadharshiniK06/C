/*48. Write a program to calculate the factorial of a number.
Sample Input:
5
Sample Output:
120*/
#include<stdio.h>
int main(){
    int number,fact=1;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
          fact*=i;
    }
    printf("%d ",fact);
}