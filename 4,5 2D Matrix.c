#include<stdio.h>
int main()
{
	int h[4][5]={{1,2,3,4,5},{6,7,8,9,0},{1,3,5,7,8},{2,4,6,8,0}};
	int u,o;
	for(u=0;u<4;u++)
	{
		for(o=0;o<5;o++)
		{
			printf("%d\t",h[u][o]);
		}
		
	}
	return 0;
}
