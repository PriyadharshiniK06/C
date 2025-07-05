#include<stdio.h>
int main()
{
	int a[2];
	int b;
	printf("The elements in the array:");
	for(b=0;b<2;b++)
	{
		scanf("%d",&a[b]);
	}
	for(b=0;b<2;b++)                      
	{
		printf("[%d]:%d\n",b,a[b]);
	}
	return 0;
}
