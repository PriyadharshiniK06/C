#include<stdio.h>
int   main()
{
	char a;
	printf("Enter the value of a : ");
	scanf("%c",&a);
	if('a'<=a&& a <='z')
	{
		printf("a is an lowercase  Alphabet");
	}
	else if('A'<=a&& a <='Z')
	{
		printf("a is an  uppercase Alphabet");
	}
     else 
	{
		printf("a is a number");
	}
	
}
