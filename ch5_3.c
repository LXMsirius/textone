#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("please enter i,i=?");
    scanf("%d",&i);
    // while (i<=10)
    // {
        // sum+=i;
        // i++;
    // }
    do
    {
        sum+=i;
        i++;
    } while (i<=10);
    printf("sum=%d\n",sum);
    return 0;
}