#include<stdio.h>
int main()
    {
        int a,b,c,max=0;
        printf("enter three integer number:");
        scanf("%d,%d,%d",&a,&b,&c);
        if(a<b) 
            max=b;
        else
            max=a;
        if(max<c) max=c;
        printf("The max_number is:%d",max);
        return 0;
    }