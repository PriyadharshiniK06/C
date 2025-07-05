#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number:");
	scanf("%d",&a);
	if(a%2==0 && a>=0)
	{printf("a is positive-even");
	}
	else if (a%2!=0 && a<=0 )
	{printf("a is negative-odd");
	}
	else if(a%2==0 && a<=0)
	{printf("a is negative-even");
	}
	else 
	{printf("a is positive-odd");
	}
	return 0;
	
}
