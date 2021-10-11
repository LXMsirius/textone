#include<stdio.h>

int main()
{
    int fun(int x,int y,int(*p)(int ,int));
    int max(int,int);
    int min(int,int);
    int add(int,int);
    // int (*p)(int,int);
    // int a,b,c,n;
    // printf("please enter a and b:");
    // scanf("%d,%d",&a,&b);
    int a=34,b=-21,n;
    printf("please choose 1 ,2 or 3:");
    scanf("%d",&n);
    if(n==1) fun(a,b,max);
    else if(n==2) fun(a,b,min);
    else if(n==3) fun(a,b,add);
    // c=(*p)(a,b);
    // printf("a=%d,b=%d\n",a,b);
    // if(n==1) printf("max=%d\n",c);
    // else printf("min=%d\n",c);
    return 0;
}

int fun(int x,int y,int (*p)(int ,int))
{
    int result;
    result=(*p)(x,y);
    printf("%d\n",result);
}

int max(int x,int y)
{
    int z;
    z=x>y?x:y;
    printf("max=");
    return z;
}

int min(int x,int y)
{
    int z;
    z=x>y?y:x;
    printf("min=");
    return z;
}

int add(int x,int y)
{
    int z;
    z=x+y;
    return z;
}