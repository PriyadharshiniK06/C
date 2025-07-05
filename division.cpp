#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any integer :");
	scanf("%d",&a);
	for (b=1;b<=35;b++)
	{
		c=a/b;
	    printf("%d\n",c);
	}
	return 0;
}
