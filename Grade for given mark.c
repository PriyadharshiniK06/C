#include<stdio.h>
int main()
{
	int a;
	printf("Enter your mark:");
	scanf("%d",&a);
	if(a>=90)
	{
		printf("Your grade is O");
	}
	else if(a>=60 && a<=90)
	{
		printf("Your Grade is A");
	}
	else if(a>=35 && a<=60)
	{
		printf("Your Grade is B");
	}
	else
	{
		printf("You are Fail");
	}
	return 0;
}
