#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//栈区:局部变量，函数形参  堆区:动态开辟的内存，malloc，calloc     静态区:全局变量，static修饰的变量
//递归常见的错误：stack overflow（栈溢出）

//#include<stdio.h>
//int print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//#include<stdio.h>
//void diaoyong(int m)
//{
//	if (m > 9)
//	{
//		diaoyong(m / 10);
//	}
//	printf("%d ", m % 10);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入:");
//	scanf("%d",&n);
//	diaoyong(n);
//	return 0;
//}

//#include<stdio.h>
//int my_strlen(char* ch)
//{
//	//int count = 0;
//	//while ((*ch) != '\0')
//	//{
//	//	count++;
//	//	ch++;
//	//}
//	//return count;
//
//	if ((*ch) != '\0')
//	{
//		return 1 + my_strlen(ch + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char ch[] = "shirongzheng";
//	int len = my_strlen(&ch);
//	printf("len=%d", len);
//	return 0;
//}

//#include<stdio.h>
//递归方式
//int my_jiechen(int m)
//{
//	if (m <= 1)
//		return 1;
//	else
//		return m * my_jiechen(m-1);
//}
//
//int main()
//{
//	//n!=1*2*3*4*5*6..*n
//	//int num = 0;
//	//int n = 0;
//	//int ret = 1;
//	//int count = 0;
//	//printf("请输入阶乘:");
//	//scanf("%d",&n);
//	//for (num = 1; num <= n; num++)
//	//{
//	//	ret = ret * num;
//	//	count++;
//	//	if (count == n)
//	//	{
//	//		printf("%d",count);
//	//	}
//	//	else
//	//	{
//	//		printf("%d*", count);
//	//	}
//	//}
//	//printf("=%d", ret);
//
//	int n = 0;
//	int ret = 0;
//	printf("请输入您的阶乘:");
//	scanf("%d", &n);
//	ret=my_jiechen(n); 
//	printf("ret=%d", ret);
//	return 0;
//}


//斐波那契数（方法一，效率极低）
//#include<stdio.h>
//int count = 0;
//int Fib(int m)
//{
//	if (m == 3)
//	{
//		count++;
//	}
//	if (m <= 2)
//		return 1;
//	else
//		return Fib(m - 1) + Fib(m - 2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入斐波那契数:");
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	printf("count=%d", count);
//	return 0;
//}

//斐波那契数（方法二，较高）
//#include<stdio.h>
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入斐波那契数:");
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret=%d", ret);
//	return 0;
//}

//#include<stdio.h>
//int  test(int n)
//{
//	if(n<10000)
//		return test(n + 1);
//}
//int main()
//{
//	test(1);
//	return 0;
//}
//问题：1.汉诺塔问题  2.青蛙跳台阶问题（这只青蛙要跳到第n个台阶，有多少中跳法）

//#include<stdio.h>
//int main()
//{
//	char arr[10]="sdga";
//	return 0;
//}
//sizeof 计算 arr所占空间的大小
//strlen 求字符串的长度-‘\0’之间的字符个数
//1.strlen 和 sizeof 没有什么关联
//2.strlen 是求字符串的长度-只能针对字符串求长度 -库函数-使用得引用文件
//3.sizeof 计算变量，数组，类型的大小-单位是字节-操作符
#include<stdio.h>
int main()
{
	return 0;
}