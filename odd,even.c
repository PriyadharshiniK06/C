#include<stdio.h>
int main()
{
	int a;
	printf("Enter any integer:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("A is even");
	}
	else
	{
		printf("A is odd");
	}
	return 0;
}
