// *程序名：pro1-3.c*
// *功能：给定三角形三边，计算三角形的面积*
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    a = 3;
    b = 4;
    c = 5;
    s = (a+b+c) / 2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of triangle is %f",area);
}