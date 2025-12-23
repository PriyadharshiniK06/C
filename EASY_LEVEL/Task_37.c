/*37. Write a program to calculate the electricity bill for simple fixed rate per unit.
Sample Input:
100
Sample Output:
500*/
#include<stdio.h>
int main(){
    int units,rate_per_unit=5;
    printf("Enter the electricity units: ");
    scanf("%d",&units);
    printf("%d",units*rate_per_unit);
}