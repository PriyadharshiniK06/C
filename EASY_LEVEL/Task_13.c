/*13. Write a program to convert Celsius temperature to Fahrenheit.
Sample Input:
0
Sample Output:
32*/
#include<stdio.h>
int main(){
    int celsius;
    printf("Enter the celsius value: ");
    scanf("%d",&celsius);
    printf("%d",((9/5)*celsius)+32);
}