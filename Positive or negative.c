#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	if(a>=0 & a<=60)
	{
		printf("The value is positive");
	}
	else if(a<=0 & a>=-75)
	{
		printf("The value is negative");
	}
	else
	{
		printf("Invalid number");
	}
	return 0;
}
