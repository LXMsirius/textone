#include<stdio.h>
int main()
{
	int n,a1,a2,a4,a5;
	printf("Input n :\n");
	scanf("%d",&n);
	a1 = n % 10;
	a2 = n / 10 % 10;
	a4 = n / 1000 % 10;
	a5 = n / 10000 ;
	if(a1==a5 && a2== a4)
		printf("%d�ǻ�����\n",n);
	else
		printf("%d���ǻ�����\n",n);
	return 0;
}
