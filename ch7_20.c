#include<stdio.h>
#include"ch7_20_1.c"
#include"ch7_20_2.c"
#include"ch7_20_3.c"
int main()
{
    extern void enter_string(char str[]);
    extern void delete_string(char str[],char ch);
    extern void print_string(char str[]);
    char c,str[80];
    enter_string(str);
    scanf("%c",&c);
    delete_string(str,c);
    print_string(str);
    return 0;
}