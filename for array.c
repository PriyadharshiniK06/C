#include<stdio.h>
int main()
{
	int a[3];
	int b;
	printf("The elements in the array: ");
	for(b=0;b<3;b++)
	{
		scanf("%d",&a[b]);
		
	}
	printf("The elements in the array are : ");
	for(b=0;b<3;b++)
	{
		
		printf("%d\t",a[b]);
	}
	return 0;
}
