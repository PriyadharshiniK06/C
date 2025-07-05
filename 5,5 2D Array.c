#include<stdio.h>
int main()
{
	int g[5][5]={{1,2,3,4,5},{6,7,8,9,0},{2,4,6,8,10},{1,3,5,7,9},{5,7,11,13,17}};
	int h,j;
	for(h=0;h<5;h++)
	{
		printf("The elements in the %d row are: ",h);
		for(j=0;j<5;j++)
		{
			printf("%d\t",g[h][j]);
		}
		printf("\n");
	}
	return 0;
}
