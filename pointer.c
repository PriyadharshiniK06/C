#include<stdio.h>
int main()
{

 int var=10;
 printf("%p\t",&var);
 int *pnr;
 pnr=&var;
 printf("%d\t",*pnr);
 printf("%p\t",*pnr);
 return 0;
}
