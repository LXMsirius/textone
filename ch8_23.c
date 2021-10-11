#include<stdio.h>

int main()
{
    int max(int,int);
    int min(int,int);
    int (*p)(int,int);
    int a,b,c,n;
    printf("please enter a and b:");
    scanf("%d,%d",&a,&b);
    printf("please choose 1 or 2:");
    scanf("%d",&n);
    if(n==1) p=max;
    else if(n==2) p=min;
    c=(*p)(a,b);
    printf("a=%d,b=%d\n",a,b);
    if(n==1) printf("max=%d\n",c);
    else printf("min=%d\n",c);
    return 0;
}

int max(int x,int y)
{
    int z;
    z=x>y?x:y;
    return z;
}

int min(int x,int y)
{
    int z;
    z=x>y?y:x;
    return z;
}