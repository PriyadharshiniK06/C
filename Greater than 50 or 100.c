#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any two  numbers:");
	scanf("%d%d",&a, &b);
	
	if((a>b)&&  (a>=50) && (a<=99))
	{
		printf("a is greater than b and the value is greater than 50");
		
	}
	else if((b>a)&& (a>=100) && (a<=200))
	{
		printf("b is greater than  a and the value is greater than 100");
	}
	else 
	{
		printf("a is smaller than 50 and 100");
	}
	return 0;
	
}
