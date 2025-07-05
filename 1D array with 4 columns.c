#include<stdio.h>
int main()
{
	int a[4];
	int b;
	printf("The values of the array: ");
	for(b=0;b<4;b++)
	{
		scanf("%d",&a[b]);
	}
	for(b=0;b<4;b++)
	{
		printf("%d\t",a[b]);
	}
 	return 0;
}
