#include<stdio.h>
/*int main()
{
    char c;
    c=getchar();
    while (c!='\n')
    {
        if ((c>'a'&&c<='z')||(c>='A'&&c<='Z'))
        {
            if(c>='W'&&c<='Z'||c>='w'&&c<='z') c=c-22;
            else c=c+4;
        }
        printf("%c",c);
        c=getchar();
    }
    printf("\n");
    return 0;
}*/

int main()
{
    auto char c;
    while ((c = getchar())!='\n')
    {
        if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
        {
            c=c+4;
            if(c>='Z'&&c<='Z'+4||c>'z')
                c=c-26;
        }
        printf("%c",c);
    }
    printf("\n");
    return 0;
}