#include<stdio.h>
int main()
{
	char a;
	for(a='A';a>='A'&& a<='Z';)
	{
		printf("%c\t",a);
		a++;
	}
	return 0;
}
