#include<stdio.h>
#include<math.h>
int main()
{
	int a[5],i,b,c,d,e;
	printf("Enter the marks of your five subjects:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
    	printf("%d\n",a[i]);
	}
	printf("\nThe total of the student is:");
	b=a[0]+a[1]+a[2]+a[3]+a[4];
	printf("%d",b);
	c=(a[0]+a[1]+a[2]+a[3]+a[4]);
	d=c*100;
	e=d/500;
	printf("\nThe Percentage of the student:%d",e);
	
	return 0;

}
