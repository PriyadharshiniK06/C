/*14. Write a program to convert Fahrenheit temperature to Celsius.
Sample Input:
212
Sample Output:
100*/
#include<stdio.h>
int main(){
    float fahrenheit;
    printf("Enter the fahrenheit value : ");
    scanf("%f",&fahrenheit);
    printf("%.0f",(5.0/9.0)*(fahrenheit-32));
}