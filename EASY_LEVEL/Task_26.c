/*26. Write a program to check whether a given year is a leap year.
Sample Input:
2024
Sample Output:
Leap Year*/
#include<stdio.H>
int main(){
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    if(year%4==0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
}