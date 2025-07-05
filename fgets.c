#include<stdio.h>
#include<string.h>
int main()
{
	char ch[14];
	printf ("Enter the string:");
	fgets(ch,sizeof(ch),stdin);
	printf("The fgets value is:");
	puts(ch);
	return 0;

}
