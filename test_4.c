#include <stdio.h>
int main(void)
{
	printf("人名币汇率(7月10日)\n");
	printf("名称\t\t最新价\n");
	printf("澳元人名币\t%.4f\n",5.0613);
	printf("加元人名币\t%.4f\n",5.1287);
	printf("欧元人名币\t%.4f\n",7.3907);
	printf("美元人名币\t%.4f\n",6.6830);
	float c=0.00000123456f;
	double d=123456000;
	float b=123.0f;
	printf("%f,\t\t%e\n",c,c);
	printf("%f,\t%e\n",d,d);
	printf("%f,\t\t\%e\n",b,b);
	return 0; 
}
