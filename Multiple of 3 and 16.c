#include<stdio.h>
int main()
{
	int a;
	printf("Enter any integer:");
	scanf("%d",&a);
	if(a%3==0)
	{ 
	    if(a%16==0);
	    {
	    	printf("The value is both the multiple of 3 and 16");
		}
	}
	else
	{
		printf("The value is not a multiple of 3 and 16");
	}
	return 0;
	
}
