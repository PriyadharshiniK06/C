#include<stdio.h>
#include<string.h>

struct myclass
{
	int age;
	char name[10];
};
int main()
{
	struct myclass var;
	struct myclass var1;
	
	var.age=20;
	strcpy(var.name,"alan");
	
	var1.age=22;
	strcpy(var1.name,"rajesh");
	
	printf("First student:\n");
	printf("age:%d\n",var.age);
	printf("name:%s\n",var.name);
	printf("-------------------\n");
	
	printf("Second student:\n");
	printf("age:%d\n",var1.age);
	printf("name:%s\n",var1.name);
	printf("-------------------\n");
	
}
