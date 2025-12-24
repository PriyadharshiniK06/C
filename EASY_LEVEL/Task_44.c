/*44. Write a program to print all odd numbers from 1 to N.
Sample Input:
9
Sample Output:
1 3 5 7 9*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
}