/*57. Write a program to find the GCD of two numbers.
Sample Input:
12 18
Sample Output:
6*/
#include<stdio.h>
#include<math.h>
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
    printf("%d",gcd(a,b));
    return 0;
}