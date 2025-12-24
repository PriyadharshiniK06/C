/*41. Write a program to print numbers from 1 to N, where N is given by the user.
Sample Input:
5
Sample Output:
1 2 3 4 5*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        printf("%d ",i);
    }
}