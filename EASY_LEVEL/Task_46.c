/*46. Write a program to find the sum of even numbers up to N.
Sample Input:
10
Sample Output:
30*/
#include<stdio.h>
int main(){
    int number,sum=0;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        if(i%2==0)
        {
            sum+=i;
        }
    }
    printf("%d ",sum);
}