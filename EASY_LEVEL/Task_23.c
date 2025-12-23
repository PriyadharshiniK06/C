/*23. Write a program to find the largest among three numbers.
Sample Input:
4 9 6
Sample Output:
9*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d",a);
    }
    else if(b>a && b>c){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
}