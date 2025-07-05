#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter any 5 numbers:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a>b && a>c && a>d && a>e)
	{printf("a is greater");
	}
	else if (b>a && b>c && b>d && b>e)
	{printf("b is greater");
	}
	else if (c>a && c>b && c>d && c>e)
	{printf("c is greater");
	}
	else if(d>a && d>b && d>c && d>e)
	{printf("d is greater");
	}
	else if(e>a && e>b && e>c && e>d)
	{printf("e is greater");
	}
	return 0;
}
