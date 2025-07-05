#include<stdio.h>
int main()
{
	int b=0;
	float a;
	int i;
	printf("Enter any number:");
	scanf("%d",&b);
	
	for(i=1;i<=b;i++)
	{
		a= sqrt(i);
		printf("square root of %d is %f\n ",i,a);
	
	}	
	return 0;
}
