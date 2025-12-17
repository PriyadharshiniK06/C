/*2. Write a program to print your name and age in a single line.
Sample Input:
Priya 20
Sample Output:
Priya 20*/
#include<stdio.h>
int main(){
    char name[100];
    int age;
    printf("Enter your name and age : ");
    scanf("%s %d",name , &age);
    printf("%s %d",name,age);
}