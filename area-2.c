#include <stdio.h>
int main()
{
	int length,width,area;
	
	printf("Please input length and width : ");
	scanf("%d%d",&length,&width);
	
	
	area=length*width;
	
	printf("\nLength is : %d\n",length);
	printf("Width is : %d\n",width);
	printf("Area is : %d\n",area);
	
	return 0;
}
