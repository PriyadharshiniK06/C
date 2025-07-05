#include<stdio.h>
int main()
{
	int a=0,b=1,c;
	
	while(a<=10)
	{
		printf("%d\t",a);
		
		c=a+b;
		a=b;
		b=c;
	}
}
