#include<stdio.h>
#include<string.h>
#include<math.h>
struct student
{
	char name[20];
	char dept[20];
	int mark1;
	int mark2;
	int mark3;
	int mark4;
	int mark5;
	int total;
};
int main()
{
	struct student total;
	struct student total1;
	strcpy(total.name,"Raji");
	strcpy(total.dept,"CSE");
	total.mark1=78;
	total.mark2=89;
	total.mark3=76;
	total.mark4=79;
	total.mark5=88;
	printf("The student name:%s\n",total.name);
	printf("The student department:%s\n",total.dept);
	printf("First mark:%d\n",total.mark1);
	printf("Second mark:%d\n",total.mark2);
	printf("Third mark:%d\n",total.mark3);
	printf("Fourth mark:%d\n",total.mark4);
	printf("Fifth mark:%d\n",total.mark5);
	total1.total=	total.mark1 + total.mark2 + total.mark3 + total.mark4 + total.mark5;
	printf("The total mark:%d",total1.total);
	
}

