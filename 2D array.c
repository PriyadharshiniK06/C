#include<stdio.h>
int main()
{
	int matrix[3][4]={ {1,4,6,8},{2,3,6,8},{1,5,6,7}};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
	}
	return 0;
}
