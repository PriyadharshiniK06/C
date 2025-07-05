#include<stdio.h>
int main()
{
	int a,n=1;
	
	printf("Enter the number:");
	scanf("%d",&a);                       
	for(n=1;n<=16 ;n++)
	{
		printf("%d*%d=%d\n",a,n,a*n);
	}
	return 0;
	
}
