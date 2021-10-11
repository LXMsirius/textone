#include <stdio.h>

int main()
{
    char a[] = "I am a students.", b[20], *p1, *p2;
    p1 = a;
    p2 = b;
    for (; *p1 != '\0'; p1++, p2++)
        *p2 = *p1;
    *p2 = '\0';
    p1 = a;
    p2 = b;
    printf("string a is:%s\n", p1);
    printf("string b is:%s\n", p2);
    return 0;
}