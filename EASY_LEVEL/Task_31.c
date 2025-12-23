/*31. Write a program to calculate profit or loss based on cost price and selling price.
Sample Input:
500 450
Sample Output:
Profit*/
#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter the selling price and cost price: ");
    scanf("%d %d",&sp,&cp);
    if(sp>cp){
        printf("Profit");
    }
    else{
        printf("Loss");
    }

}