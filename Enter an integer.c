#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number less than 30:");
	scanf("%d",&a);
	while(a<=30)
	{
		printf("%d\t",a);
		a++;
		
	}
	return 0;
}
