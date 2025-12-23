/*34. Write a program to check whether three angles can form a valid triangle.
Sample Input:
60 60 60
Sample Output:
Valid Triangle*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three angles of a triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>0 && b>0 && c>0 && (a+b+c)==180){
        printf("Valid Triangle");
    }
    else {
        printf("Not a Valid Triangle");
    }
}