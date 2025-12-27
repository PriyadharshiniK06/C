/*58. Write a program to find the LCM of two numbers.
Sample Input:
4 6
Sample Output:
12*/
#include<stdio.h>
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    printf("%d",(a*b)/gcd(a,b));
}