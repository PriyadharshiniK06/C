/*12. Write a program to calculate the area of a circle using radius.
Sample Input:
7
Sample Output:
153.94*/
#include<stdio.h>
int main(){
    int a;
    printf("Enter the radius : ");
    scanf("%d",&a);
    printf("%.2f",3.1416*a*a);
}