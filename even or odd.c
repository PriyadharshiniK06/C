#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number:");
	scanf("%d",&a);
	if(a%2==0 && a>=0 && a<=25 )
	{
		printf("The given number is even and in the given range");
	}
	else if (a%2!=0 && a>=26 && a<=67)
	{
		printf("The given number is odd and in the given range");
	}
	else
	{
		printf("The given number is not a given range number");
	}
}
