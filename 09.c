#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
	//int a = -1;
	////>> -- 右移操作符-->1.算术右移（右边丢弃，左边补原符号位）  2.逻辑右移（右边丢弃，左边补0）
	//// 整数的二进制表示有:源码，反码，补码
	////存储到内存的是补码
	////10000000000000000000000000000001 -原码
	////11111111111111111111111111111110 -反码 
	////11111111111111111111111111111111 -补码
	//int b = a >> 1;
	//printf("%d ", b);
	//int a = 5;
	//int b = a << 1;
	//printf("%d ", b);

	//不适用第三变量，将两个数进行交换
	//int a = 5;
	//int b = 9;
	//a = a ^ b;
	//b = a ^ b;
	//	a = a ^ b;

	//a = a + b;//栈溢出
	//b = a - b;
	//a = a - b;
//	printf("a=%d b=%d\n", a,b);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
	//求一个数中二进制中的1的个数
	//int input = 0;
	//int i = 0;
	//int count = 0;
	//printf("请输入一个数:");
	//scanf("%d", &input);
	//for (i = 0; i < 32; i++)
	//{
	//	if (1 == ((input >> i) & 1))
	//	{
	//		count++;
	//	}
	//}
	//printf("count=%d", count);

	//int a = 10;
	//printf("a=%d\n", a);
	//int* p = &a;
	//*p = 30;
	//printf("a=%d\n", *p);

	//~按（二进制）位取反
	//int a = 0;//000000000000000000000000原码
	//		  //111111111111111111111111补码
	//		  //111111111111111111111110反码
	//		  //100000000000000000000001原码
	//printf("%d\n", ~a);

	//int a = 11;//00000000000000000000000000001011原码
	//		   //11111111111111111111111111110100补码
	//		   //11111111111111111111111111110101反码
	//		   //10000000000000000000000000001010原码
	//printf("%d\n", ~a);

	//int a = 11;       //00000000000000000000000000001011
	//                  //00000000000000000000000000000100
	//a = a | (1 << 2); //00000000000000000000000000001111
	//printf("%d\n", a);//
	//a = a & (~(1 << 2));//00000000000000000000000000001111
	//                    //00000000000000000000000000000100                            
	//printf("%d\n", a);  //00000000000000000000000000001011

	//int a = 5;
	//printf("%d\n", a++);//5
	//printf("%d\n", a++);//6

	//强制类型转换
	//int a = (int)3.14;
	//printf("%d ",a);

	//0011
	//0101
	//int i = 0;
//	int j = 0;
//	int n = 0;
//	printf("请输入:>");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 2; j <=sqrt(i); j++)
//		{	
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		/*if (j == i)
//		{
//			printf("%d ", i);
//		}*/
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;           
//	                    
//}          

//#include<stdio.h>
//创建一个结构体类型-struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
	//使用struct Stu 这个类型创建了一个学生对象s1，并初始化
	//struct Stu s1 = {"史荣政",21,"20200129032"};
	//printf("%s\n", s1.name);
	//printf("%d\n", s1.age);
	//printf("%s\n", s1.id);

	//struct Stu* ps = &s1;
	//printf("%s\n", ps->name);
	//printf("%d\n", ps->age);
	//printf("%s\n", ps->id);
	//结构体指针->成员名

	////两种方法都是一样的
	//printf("%s\n", (*ps).name);
	//printf("%d\n", (*ps).age);
	//printf("%s\n", (*ps).id);
//	return 0;
//}
//原码->补码：原码取反加1得到反码
//补码->原码：补码减1取反得到原码


//指针
//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//int* p; *p能够访问4个字节
//char* p; *p能够访问1个字节
//double* p; *p能够访问8个字节
//指针类型决定了：指针走一步走多远（指针的步长)
//int* p;p+1-->4
//char* p;p+1-->1
//double* p;p+1-->8

//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	float* p = &a;
// 	printf("%f ", *p);
//	return 0;
//}


// 野指针
//#include<stdio.h>
//int main()
//{
//	int* p;//未初始化的指针变量
//	*p = 20;
//
//	return 0;
//}

//数组越界访问了，野指针
//#include<stdio.h>
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i < 12; i++)
//	{
//		*p = i;
//		p++;//可以写成    *p++=i;
//	}
//	return 0;
//}


//这是一个隐藏错误的代码，编译器发现不出来
//#include<stdio.h>
//int* test()
//{
//	int a = 10;//里面的a的地址是临时的，出去就销毁了，这里的a是局部变量
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//如何避免野指针？
//1.指针初始化 int* p=NULL; //NULL - 用来初始化指针的，给指针赋值 //当指针为NULl（空）时，不能被访问
//2.小心指针越界
//3.指针只想空间释放即使置NULl
//4.指针使用之前检查有效性

//#include<stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr;
//	for (i = 0; i < sz; i++)
//	{
//		
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//#include<stdio.h>
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	printf("%f ", *vp);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,11,23 };
//	printf("%d\n", &arr[8] - &arr[0]);
//	return 0;
//}
// 
//int arr[10]={1,2,3,4,5,6,7,8,9,10};
// &arr[9]-&arr[0]
//指针-指针：得到中间的元素个数

//strlen
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end =str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d ", len);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[] = {1,2,0};
//	int len = strlen(arr);
//	printf("%d ", len);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址 - 首元素的地址
//	printf("%p\n", &arr[0]);
//	//1.&arr-&数组名- 数组名不是首元素的地址-数组名表示整个数组-&数组名 取出的是整个数组的地址
//	//2.sizeof(arr)-sizeof(数组名) - 数组名表示的整个数组- sizeof(数组名)计算的是整个数组的大小
//	return 0;
//}

//二级指针变量
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	int* * ppa = &pa;//ppa就是二级指针
//	int** * pppa = &ppa;//pppa就是三级指针，以此类推
//	**ppa = 34;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//	return 0;
//}

//好孩子 - 孩子
//指针数组 - 数组 - 存放指针的数组
//数组指针 - 指针

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;

	//int* arr2[] = { &a,&b,&c };
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d ", *arr2[i]);//解引用
	//}

//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入:>");
//	scanf("%d%d%d", &a,&b,&c);
//	if (a > b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (b > c)
//	{
//		int temp = b;
//		b=c;
//		c = temp;
//	}
//	if (a > c)
//	{
//		int temp = a;
//		a=c;
//		c = temp;
//	}
//	printf("%d<%d<%d", a, b, c);
//	return 0;
//}

#include <stdio.h>
main()
{
	int a = 5, b, c, i = 10;
	b = a++;
	c = ++b;

	printf("a = %d, b = %d, c = %d\n", a, b, c);//6 5 6         6 6 6 
	printf("i,i++,i++ = %d,%d,%d\n", i, i++, i++);//10 10 11    12 11 10
	printf("%d\n", ++i);//13
	printf("%d\n", --i);//12
	printf("%d\n", i++);//12
	printf("%d\n", i--);//13
	printf("%d\n", -i++);//-12
	printf("%d\n", -i--);//-13
	getchar();
}