#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("请输入:");
//	scanf("%d", &a);
//	printf("%d", a);
//	return 0;
//} 

//#include<stdio.h>
//#define MAX(x,y)(x>y?x:y)//宏定义
//int MAx(int x, int y)//自定义函数
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//		return x;
//	}
//	else
//	{
//		z = y;
//		return z;
//	}
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	int Max = MAx(a, b);
//	printf("max=%d\n", max);
//	printf("Max=%d\n", Max);
//	return 0;
//}
 
//不能实现两个数之间的交换 
// 当实参传给形参的时候，形参其实是实参的一份临时拷贝，对形参的修改是不会改变实参的           （面试考官会问）
//#include<stdio.h>
//void Swap(int x, int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 30;
//	printf("a=%d,b=%d\n", a, b);
//  调用Swap函数                   (传值调用)
//	Swap(a,b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//#include<stdio.h>
//void Swap1(int* pa, int* pb)//定义一个指针变量
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 11;
//	int b = 99;
//	printf("原数据:a=%d b=%d\n", a, b);
//	//调用Sawp1函数（传址调用）
//	Swap1(&a, &b);
//	printf("交换后:a=%d b=%d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//void Swap()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (n = 2; n <= i; n++)
//		{
//			if (i % n == 0)
//			{
//				break;
//			}
//		}
//		if (i == n)
//		{
//			printf("%d\t", i);
//			count++;
//			if (count % 5 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//	printf("count=%d\n", count);
//}
//int main()
//{
//	Swap();
//	return 0;
//}

#include<stdio.h>
#include<math.h>
int is_prime(int n)
{	
	int j = 0;
	for (j = 2; j <=sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		
		if(is_prime(i)==1);
		{
			printf("%d ", i);
		}
	}
	return 0;
}