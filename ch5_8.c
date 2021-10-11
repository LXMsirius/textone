#include<stdio.h>

int main()
{
    long f1=1,f2=1,n=0,f3;
    int i;
    printf("%12d\n%12d\n",f1,f2);
    for(i=1;i<=20;i++,n++)
        {
            if(n%5==0) printf("\n");
            // f3=f1+f2;
            printf("%12d %12d",f1,f2);
            // printf("%12d",f3);
            // f1=f2;
            // f2=f3;
            f1=f1+f2;
            f2=f2+f1;
        }
    return 0;
}