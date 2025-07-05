#include<stdio.h>
int main()
{
	int p,r,t,s;
	printf("Enter the principal,rate,time taken");
	scanf("%d%d%d",&p,&r,&t);
	s= p*1+r*t;
	printf("Enter the compund interest is:%d\n",s);
	if (s>200)
	{
		if (r>15)
		{
			printf("The compound interest is greater with r\n ");
		}
		else
		{
			printf("The compoud interest is greater but r is small\n");
		}
	}
	else
	{
		printf("The compoud interest is less than 200\n");
	}
	
	return 0;
}
