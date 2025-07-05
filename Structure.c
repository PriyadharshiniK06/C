#include<stdio.h>
#include<string.h>

struct myclass
{
	int age;
	char name[20];
};
int main()
{
	struct myclass var;
	
	var.age=20;
	strcpy(var.name,"alan");
	
	printf("age:%d\t",var.age);
	printf("name:%s",var.name);
}
