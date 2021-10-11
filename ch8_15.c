#include<stdio.h>

int main()
{
    void average(float *p,int n);
    void search(float (*p)[4],int n);
    float score[3][4]={{56,67,70,60},{80,58,90,81},{90,99,100,98}};
    // average(*score,12);
    search(score,3);
    return 0;
}

/* /void average(float *p,int n)
{
    float *p_end;
    float sum=0,aver;
    p_end=p+n-1;
    for(;p<=p_end;p++)
        sum=sum+(*p);
    aver=sum/n;
    printf("average=%5.2f\n",aver);
}*/

void search(float (*p)[4],int n)/* n用于控制输出某一行 */
{
    int i,j,flag;
    // printf("The score of NO.%d are:\n",n);
    for(j=0;j<n;j++)
    {
        flag=0;
        for(i=0;i<4;i++)
            if(*(*(p+j)+i)<60) flag=1;
        if(flag==1)
        {
            printf("No.%d fails ,his scores are:\n",j+1);
            for(i=0;i<4;i++)
                printf("%6.2f",*(*(p+j)+i));
            printf("\n");
        }
    }
        // printf("%6.2f ",*(*(p+n)+i));
    // printf("\n");
}