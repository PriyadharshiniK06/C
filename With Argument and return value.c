//Return and argument type
#include<stdio.h>
int a(int x,int y)
{
	return x-y;
}

//no return and no argument type

void h()
{
	printf("hello");
}

//return and no argument type

int c()
{
	return 5;
}
//no  return and argument type
void b(int  b)
{
	printf("The a is :%d",b);
}
int main()
{
	h();
	printf("\n");
	printf("%d\n",c());
	printf("%d\n",a(35,16));
	b(55);

}
