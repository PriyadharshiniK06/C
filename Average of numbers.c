#include<stdio.h>
int main()
{ 
    int a,b,c,d,e,f;
    printf("Enter any 5 nos:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    f=a+b+c+d+e/5;
    printf("Enter the average value:%d\n",f);
    if( d>60)
    {
    	if (a>30)
    	{
    		printf( "The average of 5 numbers is greater  with a value greater than 30 and d value greater than 60\n ");
		}
		else
		{
			printf("The average is smaller than expected\n");
		}
	}
	else
	{
		if(b>45)
		{
			printf("The average is greater with b");
		}
		else
		{ 
		   printf("The average is small");
		}
	}
    return 0;

}
