#include<stdio.h>
int main()
{
	int i,j=0;
	for (i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==3)
			{
				break;
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
