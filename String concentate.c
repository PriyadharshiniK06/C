#include<stdio.h>
#include<string.h>
int main()
{
	
    char a[25]={"PRIYADHARSHINI"};
    char b[25]={"PRIYADHARSHINI"};
	char c[30]={"Devadharshini"};
	printf("Enter the  lowered string:%s\n",strlwr(a));
	printf("Enter the uppercased  string:%s\n",strupr(a));
	printf("Enter the  reversed string:%s\n",strrev(a));
	printf("The Comparison value of a and b strings :%d\n",strcmp(a,c));
	printf("Enter the  concatenated string:%s\n",strcat(a,b));
	return 0;
}
