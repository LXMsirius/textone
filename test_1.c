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
    printf("��������������a��b��");
    scanf("%d%d",&a,&b);
    printf("���ú���ǰ��a=%d\tb=%d\n",a,b);
    printf("���ú���ǰ��a=%d\tb=%d\n",&a,&b);
    swap(&a,&b);
    printf("���ú�����a=%d\tb=%d\n",a,b);
    printf("���ú�����a=%d\tb=%d\n",&a,&b);
    return 0;
}