#include<stdio.h>
int main()
{
	char alp;
	printf("Enter any lowercase  alphabet:");
	scanf("%c",&alp);
	if((alp=='a') || (alp=='e') || (alp== 'i') || (alp== 'o')|| (alp=='u'))
	{
		printf("It is a vowel");
	}
	else if((alp=='c')|| (alp=='f'))
	{
		printf("It is c or f");
	}
	else 
	{
		printf("It is a consonant");
	}
}
