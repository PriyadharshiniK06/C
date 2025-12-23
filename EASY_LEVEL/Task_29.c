/*29. Write a program to check whether a character is uppercase or lowercase.
Sample Input:
g
Sample Output:
Lowercase*/
#include<stdio.h>
int main(){
    char alphabet;
    printf("Enter the character: ");
    scanf("%c",&alphabet);
    if(alphabet>='a' && alphabet<='z'){
        printf("Lowercase");
    }
    else if(alphabet>='A' && alphabet<='Z'){
        printf("Uppercase");
    }
}