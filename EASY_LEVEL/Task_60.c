/*60. Write a program to print all prime numbers up to N.x
Sample Input:
10
Sample Output:
2 3 5 7*/
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=2;i<=number;i++){
        bool prime=true;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                prime=false;
            }
        }
        if(prime==true){
        printf("%d ",i);
        }
    }
   
}
