/*43. Write a program to print all even numbers from 1 to N.
Sample Input:
10
Sample Output:
2 4 6 8 10*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
}