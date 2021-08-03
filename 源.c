#include<stdio.h>
int main()
{
    float a, b, c;
    printf("请输入：");
    scanf_s("%f %f %f", &a, &b, &c);
    (a == b || a == c || b == c) ? printf("等腰三角形\n"): printf("不是等腰三角形\n");
    (a + b > c && a + c > b && b + c > a) ? printf("是三角形\n"): printf("不是三角形");
    (c*c=a*a+b*b ||  b*b=a*a+c*c || a * a=b*b+c*c) ? printf("是直角") : printf("不是直角");
}