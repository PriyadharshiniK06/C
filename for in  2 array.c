#include<stdio.h>
int main()
{
	int a[2][3];
	int b,c;
	printf("The elements in the array: ");
	for(b=0;b<2;b++)
	{
		
		for(c=0;c<3;c++)
		{
			scanf("%d",&a[b][c]);
		}
	
	}
	printf("The elements in the array: \n");
	for(b=0;b<2;b++)
	{
		for(c=0;c<3;c++)
		{
			printf("[%d][%d]:%d\n",b,c,a[b][c]);
		}
	}
	return 0;
}
