/*49. Write a program to display the multiplication table of a given number.
Sample Input:
3
Sample Output:
3 6 9 12 15 18 21 24 27 30*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=1;i<=10;i++){
        printf("%d ",number*i);
    }
}