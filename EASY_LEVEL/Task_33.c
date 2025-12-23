/*33. Write a program to assign grades based on marks obtained.
Sample Input:
85
Sample Output:
Grade A*/
#include<stdio.h>
int main(){
    int mark;
    printf("Enter the mark: ");
    scanf("%d",&mark);
    if(mark>=90 && mark<=100){
        printf("Grade O");
    }
    else if(mark>=81 && mark<=89){
        printf("Grade A");
    }
    else if(mark>=70 && mark<=80){
        printf("Grade B");
    }
    else if(mark>=55 && mark<=69){
        printf("Grade C");
    }
    else if(mark>=45 && mark<=54){
        printf("Grade D");
    }
    else if(mark>=35 && mark<=44){
        printf("Grade E");
    }
    else if(mark<=34){
        printf("Grade F");
    }
}