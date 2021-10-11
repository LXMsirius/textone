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
	printf("房型\t房价\n");
	printf("单人房\t房价\n",80);
	printf("双人房\t%5d\n",280);
	printf("商务房\t%5d\n",380);
	printf("豪华房\t%5d\n",1080);
	return 0;
}
