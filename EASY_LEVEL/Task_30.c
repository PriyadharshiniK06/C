/*30. Write a program to check whether the given input is a digit or a character.
Sample Input:
7
Sample Output:
Digit*/
#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if(isalpha(ch)){
        printf("Alphabet");
    }
    else if(isdigit(ch)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}