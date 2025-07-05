#include<stdio.h>
#include<string.h>
struct student
{
	char a[20];
	char b[20];
	char c[20];
	int  d;
	int  e;
	int  f;
	char g[4];
	char h[4];
	char i[4];
};
int main()
{
	struct student var;
	strcpy(var.a, "Priya");
	strcpy(var.b, "Roshini");
	strcpy(var.c, "Raji");
	strcpy(var.g, "CSE");
	strcpy(var.h, "CSE");
    strcpy(var.i,"CSE");
	var.d=2306789;
	var.e=2307864;
	var.f=2305678;
	printf("The first student name is:%s\n",var.a);
	printf("The register no is :%d\n",var.d);
	printf("The department of the first student is:%s\n\n",var.g);
	printf("The second student name is:%s\n",var.b);
	printf("The register no is :%d\n",var.e);
	printf("The department of the second student is:%s\n\n",var.h);
    printf("The third student name is:%s\n",var.c);
	printf("The register no is :%d\n",var.f);
	printf("The department of the third student is:%s\n",var.i);
	return 0;
}
