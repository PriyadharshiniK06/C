#include<stdio.h>
int main()
{
	int a [2][3],b[2][3],c [2][3],i,j;
	printf("Enter the values for a  matrix");
	for(i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The elements of a matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n[%d][%d]:%d",i,j,a[i][j]);
		}
	}
	printf("\nEnter the values for b matrix");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nThe Elements of b matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n[%d][%d]:%d",i,j,b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			
		}
	}
	printf("\n The c matrix is:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n[%d][%d]=%d",i,j,c[i][j]);
		}
	}
	return 0;
}
