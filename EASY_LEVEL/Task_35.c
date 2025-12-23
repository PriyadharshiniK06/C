/*35. Write a program to check whether a number is a 3-digit number.
Sample Input:
999
Sample Output:
Three Digit Number*/
#include<stdio.h>
#include<string.h>
int main(){
    int number;
    char string[100];
    printf("Enter the number: ");
    scanf("%d",&number);
    sprintf(string,"%d",number);
    size_t length=strlen(string);
    if(length==3){
        printf("Three Digit Number");
    }
    else{
        printf("Not a Three Digit Number");
    }
}