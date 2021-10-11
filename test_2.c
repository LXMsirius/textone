#include <stdio.h>
#include <math.h>
void main()
{
	float a,b,c;
	printf("Please input three numbers : ");
	scanf("%f%f%f",&a,&b,&c);
	
	printf("The sum is : %f",a+b+c);
	printf("%f",(a+sqrt(b)*c)+a+b+c);
}
