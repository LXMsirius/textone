#include<stdio.h>
void swap(int*p1,int*p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

int main()
{
    int a,b;
    printf("请输入两个整数a和b：");
    scanf("%d%d",&a,&b);
    printf("调用函数前：a=%d\tb=%d\n",a,b);
    printf("调用函数前：a=%d\tb=%d\n",&a,&b);
    swap(&a,&b);
    printf("调用函数后：a=%d\tb=%d\n",a,b);
    printf("调用函数后：a=%d\tb=%d\n",&a,&b);
    return 0;
}