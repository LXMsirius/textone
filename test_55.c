#include <stdio.h>
int main()
{
	float f = 234.567;
	printf("%f\n",f);
	printf("%10.2f\n",f);
	printf("%-10.2f\n",f);
	printf("%.2f\n",f);
	printf("%10f\n",f);
	printf("1\t2\t3\t4\n");
	printf("123\t2134\t31\t4\n\n");
	printf("����\t����\n");
	printf("���˷�\t����\n",80);
	printf("˫�˷�\t%5d\n",280);
	printf("����\t%5d\n",380);
	printf("������\t%5d\n",1080);
	return 0;
}
