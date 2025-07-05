#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number:");
	scanf("%d",&a);
	if(a<=10)
	{
		printf("Good Morning");
	}
	else if (a<=50)
	{
		printf("Good Afternoon");
	}
	else if (a<=100)
	{
		printf("Good Evening");
	}
	else
	{
		printf("invalid number");
	}
	return 0;
}
