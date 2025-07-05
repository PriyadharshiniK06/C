#include<stdio.h>
int main()
{ 
   int a,b,c,d;
   printf("Enter any three numbers:");
   scanf("%d%d%d",&a,&b,&c);
   d=a+b;
   printf("my d is:%d\n",d);
   if(d>c)
   {printf("d is largest");
   }
   else if(c>d)
   {printf("c is largest");
   }
   else 
   {printf("Both are equal");
   }
   return 0;
}
