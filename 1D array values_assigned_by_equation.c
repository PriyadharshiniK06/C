#include<stdio.h>
int main()
{
	int i,arr[6];
	for(i=0;i<5;i++)
	{
		arr[i]= i * i - 2 * i+ i;
		
	}
	printf("Elements of Array:");
	for(i=0;i<5;i++)
	{
		printf("%d   ",arr[i]);
	}
	return 0;
}
