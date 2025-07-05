#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	if(a+b==100)
	{
		printf("The sum is equal to 100 ");
	}
	else
	{
		printf("The sum is not equal to 100");
	}
	return 0;
}
