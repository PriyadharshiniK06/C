/*42. Write a program to print numbers from N to 1.
Sample Input:
5
Sample Output:
5 4 3 2 1*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=number;i>=1;i--){
        printf("%d ",i);
    }
}