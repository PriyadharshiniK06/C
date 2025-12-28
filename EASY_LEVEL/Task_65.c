/*65. Write a program to print a right-angled star pattern.
Sample Input:
4
Sample Output:
*
**
***
*****/
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int j=1;j<=i;j++){
        printf("*");}
        printf("\n");
    }
}