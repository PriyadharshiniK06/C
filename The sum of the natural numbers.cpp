//Write a C program to compute the sum of the first 10 natural numbers.???????
#include<stdio.h>
int main()
{
	int a,b,c=0;
	printf("The value of a and b are: ");
	scanf("%d  %d",&a,&b);
	for (;a<=b;a++)
	{
		c+=a;
	}
	printf("The sum of the natural numbers:%d",c);
	return 0;
}
