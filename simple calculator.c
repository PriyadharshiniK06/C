#include<stdio.h>
int main()
{
	int operators='+';
	int a,b;
	printf("Enter any operator");
	scanf("%d",&operators);
	printf("Enter any two operands:");
	scanf("%d%d",&a,&b);
	switch(operators)
	{
		case'+':
			printf("%d+%d=%d",a,b,a+b);
			break;
		case'-':
		    printf("%d-%d=%d",a,b,a-b);
			break;
		case'*':
		    printf("%d*%d=%d",a,b,a*b);
			break;
		case'/':
		    printf("%d/%d=%d",a,b,a/b);
			break;
		default:
		    printf("INVALID INFORMATION");				
	}
	return 0;
}
