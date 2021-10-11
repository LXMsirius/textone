#include<stdio.h>
int main()
{
    double a,b ;
    int c= -1;
    a = 10000/3.0;
    b = 12345678954321;
    printf("%f\n",a);
    printf("%f\t%e\t%g\n",b,b,b);
    printf("%d\t%o\t%x\n",c,c,c);
    return 0;
}