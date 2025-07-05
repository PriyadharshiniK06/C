#include<stdio.h>
int main()
{
	int i,arr[5] ={10,20,30,40,50};
	arr[2]=150;
	printf("Elements in a array:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
