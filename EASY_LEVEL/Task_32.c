/*32. Write a program to calculate simple interest using principal, time, and rate.
Sample Input:
1000 2 5
Sample Output:
100*/
#include<stdio.h>
int main(){
    int principle,time,rate;
    printf("Enter the principle,time and rate: ");
    scanf("%d %d %d",&principle,&time,&rate);
    int SI=(principle*time*rate)/100;
    printf("%d",SI);
}