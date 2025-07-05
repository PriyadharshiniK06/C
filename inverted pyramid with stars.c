#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,rows;
	printf("Enter the number of rows");
	scanf("%d",&rows);
	for(i=1; i<=rows;i++)
	{
		for(j=10;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
    }
    return 0;
}
