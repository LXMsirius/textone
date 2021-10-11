#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    float b,c;
    printf("Please input a number:");
    scanf("%d",&a);
    getchar();
    printf("The money is:");
    scanf("%f",&b);
    c = 1000*pow(1+b,a);
    printf("c=%lf\nb=%lf",c,b);
    return 0;
}