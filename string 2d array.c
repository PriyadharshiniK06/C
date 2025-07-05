#include<stdio.h>
int main()
{
	char m[3][3][10]={{"roshini","first","yes"},{"three","uare","rest"},{"kind","let","its"}};
	int  i,j;
	for(i=0;i<3;i++)
	{
		printf("The Elements are:");
		for(j=0;j<3;j++)
		{
			printf("%s\t",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
