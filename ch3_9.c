#include<stdio.h>
int main()
{
    char a,b,c;
    printf("Please input three 字母:\n");
    a = getchar();
    b = getchar();
    c = getchar();
    putchar(a);
    putchar(b);
    putchar(c);
    putchar('\n');
    return 0;
}