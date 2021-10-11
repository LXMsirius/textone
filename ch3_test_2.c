#include<stdio.h>
#include<math.h>
int main()
{
    float b,c;
    int a;
    printf("Please input a number:");
    scanf("a=%d b=%f",&a,&b);
    printf("The money is:");
    c = 1000*pow(1+b,a);
    printf("c=%f",c);
    return 0;
}