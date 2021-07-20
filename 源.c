#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define Max(X,Y)(X>Y?X:Y)
#include<math.h>
int main()
{
	//int a, b, c;
	//printf("请输入三个数:");
	//scanf("%d%d%d", &a, &b, &c);
	//int max1 = 0, max2 = 0, max3 = 0;
	//if (a > b && a > c & b > c)
	//{
	//	printf("%d>%d>%d", a, b, c);
	//}
	//else if (a > b && a > c && c > b)
	//{
	//	printf("%d>%d>%d", a, c, b);
	//}
	//else if (b>a&&b>c&&a>c)
	//{
	//	printf("%d>%d>%d", b,a,c);
	//}
	//else if (b > a && b > c && c>a)
	//{
	//	printf("%d>%d>%d", b,c,a);
	//}
	//else if (c>a&&c>b&&a>b)
	//{
	//	printf("%d>%d>%d",c,a,b);
	//}
	//else if (c > a && c > b && b>a)
	//{
	//	printf("%d>%d>%d", c,b,a);
	//}

	//int a, b, c;
	//printf("请输入三个数:");
	//scanf("%d%d%d", &a, &b, &c);
	//if (a < b)
	//{
	//	int temp = a;
	//	a=b;
	//	b=temp;
	//}
	//else if (a < c)
	//{
	//	int temp = a;
	//	a = c;
	//	c = temp;
	//}
	//else if (b<c)
	//{
	//	int temp = b;
	//	b = c;
	//	c = temp;
	//}
	//printf("%d>%d>%d", a, b, c);

	//int i = 1;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (0 == i % 3)
	//	{
	//		printf("%d\t", i);
	//		if (0 == i % 5)
	//		{
	//			printf("\n");
	//		}
	//	}
	//}

	//求最大公约数(辗转相除法)
	//int m ;
	//int n ;
	//int r = 0;
	//printf("请输入两个数:");
	//scanf("%d%d", &m, &n);
	//while (r=m % n)
	//{
	////	r = m % n;
	//	m = n;
	//	n = r;
	//}
	//printf("最大公约数是:%d", n);


	//判断year是否为闰年
	//1.能被4整除并且不能被100整除是闰年
	//2.能被400整除是闰年
	//int year=0;
	//int count = 0;
	//for (year = 1000; year <= 2000; year++)
	//{
	//	if (0 == year % 4 && 0 != year % 100|| 0 == year % 400)
	//	{
	//		printf("%d\t", year);
	//		count++;
	//		if (0 == count % 10)
	//		{
	//			printf("\n");
	//		}
	//	}
	//}
	//printf("count=%d\n", count);

	//int i;
	//for (i = 100; i <= 200; i++)
	//{
	//	//素数判断的规则
	//	int n = 0;
	//	for (n = 2; n < i ; n++)
	//	{
	//		if (i % n == 0)
	//		{
	//			break;
	//		}
	//	}
	//	if (n == i)
	//	{
	//		printf("%d\t", i);
	//	}
	//}


	
	int i=0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//素数判断的规则
		int n = 0;
		//for (n = 2; n < sqrt(i); n++)  //for(n=2;n<(i/2);n++)一样的
		for(n=2;n<(i/2);n++)
		{
			if (i % n == 0)
			{
				break;
			}
		}
		
		if (n>sqrt(i))
		{
			printf("%d\t", i);
			count++;
			if (count % 5 == 0) 
			{
				printf("\n");
			}
			
		}
	}

								
	return 0;
}
