#include <stdio.h>
int main(void)
{
	printf("�����һ���(7��10��)\n");
	printf("����\t\t���¼�\n");
	printf("��Ԫ������\t%.4f\n",5.0613);
	printf("��Ԫ������\t%.4f\n",5.1287);
	printf("ŷԪ������\t%.4f\n",7.3907);
	printf("��Ԫ������\t%.4f\n",6.6830);
	float c=0.00000123456f;
	double d=123456000;
	float b=123.0f;
	printf("%f,\t\t%e\n",c,c);
	printf("%f,\t%e\n",d,d);
	printf("%f,\t\t\%e\n",b,b);
	return 0; 
}
