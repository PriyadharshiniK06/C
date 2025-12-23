/*28. Write a program to check whether a given character is an alphabet or not.
Sample Input:
9
Sample Output:
Not Alphabet*/
#include<stdio.h>
int main(){
    char alp;
    printf("Enter the character: ");
    scanf("%c",&alp);
    if(alp>='a' && alp<='z' || alp>='A' && alp<='Z'){
        printf("Alphabet");
    }
    else{
        printf("Not Alphabet");
    }
}