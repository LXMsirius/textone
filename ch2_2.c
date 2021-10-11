#include<stdio.h>
int main()
	{
		int sign = 1;
		double deon=2.0,sum=1.0,term;
		while (deon<=100)
		  {
		  	sign = -sign;
		  	term = sign /deon;
		  	sum = sum+term;
		  	deon = deon + 1;
		  }
		printf("%f\n",sum);
		return 0;
	}
