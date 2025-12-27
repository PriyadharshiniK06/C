/*59. Write a program to check whether a number is prime.
Sample Input:
7
Sample Output:
Prime*/
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
    int a;
    printf("Enter the number: ");
    bool prime=true;
    scanf("%d",&a);
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            prime=false;
        }
    }
    if(prime==true){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}