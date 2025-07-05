#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value for a:");\
	scanf("%d",&a);
	if(a>0)
	{
		printf("a is positive");
	}
	else if(a==0){
		printf("a is zero");
	}
	else
	{
		printf("a is negative");
	}
	return 0;
}
