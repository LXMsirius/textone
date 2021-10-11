#include<stdio.h>
int main()
    {
        float x,y;
        printf("Please input a number into x:\n");
        scanf("%f",&x);
        if(x>=1)
            if (x<10)
            {
                y=2*x-1;
            }
            else
            {
                y=3*x-11;
            }
        else
        {
            y=x;
        }
    printf("The y is :%f\n",y);
    return 0;
            
    }