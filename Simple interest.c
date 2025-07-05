#include<stdio.h>
int main()
{
	int p,r,t,si;
	printf("Enter the principal,rate,time:");
	scanf("%d%d%d",&p,&r,&t);
	si=p*r*t/100;
	
	printf("Enter the simple interest is:%d\n",si);
	if(si>100)
	{
		if(t>2)
		{
			printf("The simple interest have a time of 2 and more years\n");
		}
		else
		{
			printf("The time is less than 2\n");
		}
    }
		else 
		{
			printf("The simple interest is less than 100\n");
		}
	
	return 0;}
