#include<stdio.h>
#include<string.h>
union vision{
	int a;
	char d[4];
	float f;
	double g;
	char h[6];
};
int main()
{
	union vision myVar;
    myVar.a=98;
    strcpy(myVar.d,"rose");
    myVar.f=65.768;
    myVar.g=56.78990;
    strcpy(myVar.h,"j");
    printf("%d\n",myVar.a);
    printf("%s\n",myVar.d);
    printf("%f\n",myVar.f);
    printf("%lld\n",myVar.g);
    printf("%c\n",myVar.h);
    return 0;
}
