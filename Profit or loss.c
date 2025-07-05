#include<stdio.h>
int main()
{
	int sp,cp;
	printf("Enter  your selling price and costprice:");
	scanf("%d%d",&sp,&cp);
	if(sp>cp)
	{
		if(sp>350)
		{printf("Tell my purchase is profit");
		}
		else
		{printf("Tell it is a profit");
		}
		
	}
	else
	{
		printf("Tell it is a loss");
	}
	return 0;
	
	
	
}
