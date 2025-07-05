#include<stdio.h>
int main()
{
	int i,j,rows;
	printf("Number of rows:");
	scanf("%d",&rows);
	for(i=1; i<=rows;i++)
	{
		for(j=10;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
