#define _CRT_SECURE_NO_WARNINGS 1
//有1,2,3,4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int count = 0;
//	for (i = 1; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			for (k = 0; k < 5; k++)
//			{
//				if (i != j && i != k && j != k)
//				{
//					printf("%d%d%d\t", i, j, k);
//					count++;
//					if (count % 5 == 0)
//					{
//						printf("\n");
//					}
//				}
//				
//			}
//		}
//	}
//	printf("count=%d", count);
//}

//企业发放的奖金根据利润提成。其实就是考分类。
//#include<stdio.h>
//double fun(int profit)
//{
//	int sum = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum3 = 0;
//	int sum4 = 0;
//	int sum5 = 0;
//	sum = 100000 * 0.1;
//	sum1 = sum + (profit - 100000) * 0.075;
//	sum2 = sum1 + (profit - 200000) * 0.05;
//	sum3 = sum2 + (profit - 400000) * 0.03;
//	sum4 = sum3 + (profit - 600000) * 0.015;
//	sum5 = sum4 + (profit - 1000000) * 0.01;
//	if (profit > 0 && profit <= 100000)
//	{
//		return sum;
//	}
//	else if (profit > 100000 && profit <= 200000)
//	{
//		return sum1;
//	}
//	else if (profit > 200000 && profit <= 400000)
//	{
//		return sum2;
//	}
//	else if (profit > 400000 && profit <= 600000)
//	{
//		return sum3;
//	}
//	else if (profit > 600000 && profit <= 1000000)
//	{
//		return sum4;
//	}
//	else if (profit > 1000000)
//	{
//		return sum5;
//	}
//}
//int main()
//{
//	int profit = 0;
//	double set = 0;
//	printf("请输入利润:>");
//	scanf("%d", &profit);
//	set = fun(profit);
//	printf("提成为:%.4lf ", set);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double i;
//	double bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
//	printf("你的净利润是：\n");
//	scanf("%lf", &i);
//	bonus1 = 100000 * 0.1;
//	bonus2 = bonus1 + 100000 * 0.075;
//	bonus4 = bonus2 + 200000 * 0.05;
//	bonus6 = bonus4 + 200000 * 0.03;
//	bonus10 = bonus6 + 400000 * 0.015;
//	if (i <= 100000) 
//	{
//		bonus = i * 0.1;
//	}
//	else if (i <= 200000) {
//		bonus = bonus1 + (i - 100000) * 0.075;
//	}
//	else if (i <= 400000) {
//		bonus = bonus2 + (i - 200000) * 0.05;
//	}
//	else if (i <= 600000) {
//		bonus = bonus4 + (i - 400000) * 0.03;
//	}
//	else if (i <= 1000000) {
//		bonus = bonus6 + (i - 600000) * 0.015;
//	}
//	else if (i > 1000000) {
//		bonus = bonus10 + (i - 1000000) * 0.01;
//	}
//	printf("提成为：bonus=%lf", bonus);
//
//	printf("\n");
//}

//一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
//假设该数为x
// 
//      则：x+100=n*n,x+100+168=m*m
//计算等式：m*m-n*n=(m+n)(m-n)=168
//    设置：m+n=i,m-n=j,i*j=168,i和j至少一个是偶数
//    可得：m=(i+j)/2,n=(i-j)/2,i和j要么都是偶数，要么都是奇数
//          从3和4推导可知道，i与j均是大于等于2的偶数
//          由于i*j=168，j>=2,则1<i<168/2+1
//接下来将i的所有数字循环计算即可

//#include<stdio.h>;
//int main()
//{
//	int i, j, m, n, x;
//	for (i = 1; i < 168 / 2 + 1; i++)
//	{
//		if (168 % i == 0)
//		{
//			j = 168 / i;
//			if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
//			{
//				m = (i + j) / 2;
//				n = (i - j) / 2;
//				x = n * n - 100;
//				printf("%d+100=%d*%d\n", x, n, n);
//				printf("%d+268=%d*%d\n", x, m, m);
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0; 
//	int temp = 0;
//	printf("请输入三个数:>");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a > c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//    if (b > c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d<%d<%d", a, b, c);
//	return 0;
//}

//不使用临时变量，交换两个数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数:\n");
//	scanf("%d%d", &a, &b);
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//                  *******
//                * 
//                *
//                *
//                  *******
//                     *
//


//#include<stdio.h>
//int main()
//{
//	printf(" ******\n");
//	printf("*\n");
//	printf("*\n");
//	printf("*\n");
//	printf(" ******\n");
//	printf("   *\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 0; i < 8; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			if ((i + j) % 2 == 0)
//			{
//				printf("%c%c", 219, 219);
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
//int main()
//{
//	int i, j;
//	SetConsoleOutputCP(437);
//	char a = 176, b = 219;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (i == j || (i + j + 1) == 5)
//				printf("%c", b);
//			else
//				printf("%c%c", a, a);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//2+22+222+2222+22222...
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int m;
//	int i = 0;
//	int sum = 0;
//	int count = 0;
//	printf("请输入几个数相加,相加数为几:>\n");
//	scanf("%d%d", &n,&m);
//	for (i = 1; i <= n; i++)
//	{
//		double p=pow(m, i);
//		sum = sum + p;
//		count++;
//		int k;
//		if (count == n )
//		{
//			printf("%.0f", p);
//		}
//		else
//		{
//			printf("%.0f+", p);
//		}
//	}
//	printf("=sum\n");
//	printf("sum=%d\n", sum);
//	return 0;
//}

//讲一个正整数分解质因数。例如：输入90，打印出90=2*3*3*5。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("请输入整数:>");
//	scanf("%d", &n);
//	printf("%d=", n);
//	for (i = 2; i <= n; i++)
//	{
//		while(n%i==0)
//		{
//			printf("%d", i);
//			n = n / i;
//			if (n != 1)
//			{
//				printf("*");
//			}
//		}
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i, n;
//	printf("请输入整数:>");
//	scanf("%d", &n);
//	for (i = 2; i <= n; i++)
//	{
//		while(n % i == 0)
//		{
//			printf("%d", i);
//			n = n / i;
//			if (n != 1)
//			{
//				printf("*");
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i, n;
//	printf("请输入整数:>");
//	scanf("%d", &n);
//	printf("%d=", n);
//	i = 2;
//	while (n > i)
//	{
//		if (n % i == 0)
//		{
//			printf("%d*", i);
//			n /= i;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	printf("%d\n", i);
//}

//#include<stdio.h>
//int min(int m,int n)
//{
//	return m * n;
//
//}
//int max(int m, int n)
//{
//	int i = 0;
//	while ((m % i == 0)&&(n % i == 0))
//	{
//		if ((m % i == 0) && (n % i == 0))
//		{
//			m = m % i;
//			n = n % i;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	return i;
//}
//int main()
//{
//	int m, n,ret,ret1;
//	printf("请输入两个正整数:>");
//	scanf("%d%d", &m, &n);
//	ret = max(m,n);
//	printf("最大公约数:%d\n");
//	ret1 = min(m,n);
//	printf("最小公倍数:%d\n"); 
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a, b, t, r, n;
	printf("请输入两个数字:\n");
	scanf("%d%d", &a, &b);
	if (a < b)
	{
		t = b;
		b = a;
		a = t;
	}
	r = a % b;
	n = a * b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	printf("这两个数的最大公约数是%d,最小公倍数是%d\n", b, n / b);
	return 0;
}





