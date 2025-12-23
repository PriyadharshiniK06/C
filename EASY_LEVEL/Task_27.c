/*27. Write a program to check whether a given character is a vowel or consonant.
Sample Input:
e
Sample Output:
Vowel*/
#include<stdio.h>
int main(){
    char a;
    printf("Enter the character: ");
    scanf("%c",&a);
    if(a=='a'|| a=='e' || a=='i' || a=='o' || a=='u' ||a=='A'|| a=='E' || a=='I' || a=='O' || a=='U'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
}