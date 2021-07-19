#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
	//char ch = 'qv';
	//char* pc = &ch;
	//*pc = 's';
	//printf("%c\n", ch);
	//printf("%d\n", sizeof(pc));

	//double d = 10.23;
	//double* pd = &d;
	//*pd = 40.454;
	//printf("%lf\n", *pd);
	//printf("%d\n", sizeof(double*));

	//结构体


//	return 0;
//} 
//* - 解引用操作符/间接访问操作符
//指针大小在32（bit）位平台是4个字节，64（bit）位平台是8个字节
//define 不是关键字而是指令

//结构体 关键字是struct
//   .      结构体变量.成员
//   ->     结构体指针->成员   （两种方法都是一样的）
//#include<stdio.h>
//#include<string.h>
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
	//struct Book b1 = { "C语言程序设计",55};
	//printf("书名:%s\n", b1.name);
	//printf("价格:%d元\n", b1.price);
	//b1.price = 70;
	//printf("修改过的价格:%d元\n", b1.price);

	//struct Book* pd = &b1;

	//printf("书名:%s\n", (*pd).name);
	//printf("价格:%d元\n", (*pd).price);
	//printf("%s\n", pd->name);
	//printf("%d\n", pd->price);

	//b1.price=17 是可以直接修改的，应为它是变量，b1.name="C++"是不能直接修改的，因为它是一个数组，而数组是一个地址，地址是不能修改的
//	strcpy(b1.name, "C++"); //strcpy-string- copy -字符串拷贝-库函数-string.h
//	printf("%s\n", b1.name); 
//	return 0;
//}
 //{}一个大括号就是一个代码块，else和与它最近的if匹配

//判断一个数是否为奇数
//#include<stdio.h>
//int main()
//{
	//int num;
	//printf("请输入一个数：");
	//scanf("%d", &num);
	//if (1 == num%2)
	//{
	//	printf("%d是奇数\n", num);
	//}
	//else
	//{
	//	printf("%d是偶数\n", num);
	//}

	//int i;
	//int count = 1;
	//for (i = 1; i <= 100;i++)
	//{	
	//	if (1 == i % 2)
	//	{
	//		count += 1;
	//		printf("%d\t", i);
	//		if (1 == count % 5)
	//		{
	//			printf("\n");
	//		}
	//	}
	//}

	//int i;
	//i = 1;
	//int count = 1;
	//while (i <= 100)
	//{
	//	if (1 == i % 2)
	//	{	
	//		count += 1;
	//		printf("%d\t", i);
	//		if (1 == count % 5)
	//		{
	//			printf("\n");
	//		}
	//	} 
	//	i++;
	//}


	//switch用法

	//int day=0;
	//printf("请输入week：");
	//scanf("%d", &day);
	//switch(day)
	//{
	//	case 1:
	//		printf("星期一"); break;
	//	case 2:
	//		printf("星期二"); break;
	//	case 3:
	//		printf("星期三"); break;
	//	case 4:
	//		printf("星期四"); break;
	//	case 5:
	//		printf("星期五"); break;
	//	case 6:
	//		printf("星期六"); break;
	//	case 7:
	//		printf("星期天"); break;
	//	default:
	//		printf("输入错误！"); break;
	//}

	//getchar()从键盘输入一个字符
	//putchar()显示出一个字符
	//int ch = getchar();
	//putchar(ch);


	//int ch = 0;
	//while ((ch = getchar()) != EOF)//getchar()函数，所以不能直接退出。必须Ctrl+z 再输入EOF才能退出来
	//{
	//	putchar(ch);
	//}

	//int ss = 0;
	//int passwd[20] = {0};
	//printf("请输入密码:>");
	//scanf("%s", &passwd);
	//while ('\n' != getchar())//这里的while是一直判断到\n
	//{
	//	;
	//}
	//printf("请确认Y/N:");
	//ss = getchar();
	//if ('Y' == ss)
	//{
	//	printf("确认成功");
	//}
	//else
	//{
	//	printf("确认失败");
	//}
	
	//do...while语句
	//int i = 1;
	//do
	//{
	//	printf("%d\t", i);
	//	i++;
	//} 
	//while (i <= 10);

/*	return 0;
}*/ 
//i++ 是先使用，再加1    ++i 是先加1，再使用
//break在while循环中的作用：
//其实在循环中只要遇到break，就停止后期的所有的循环，直接终止循环。所以：while中的break是用于永久终止循环的。
//continue在while循环中的作用就是：
//continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，而是直接跳转到while语句的判断部分。进行下一次循环的入口判断。


#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	//计算n的阶乘
	//int i = 0;
	//int n = 0;
	//int sum = 1,sum1=0;
	//printf("请输入:");
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	sum = sum * i;
	//	sum1 = sum1 + sum;
	//}
	//printf("%d", sum1);

	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//int sum = 0;
	//printf("请输入:");
	//scanf("%d",&n);
	//for (n = 1; n <= 3; n++)
	//{
	//	ret = 1;
	//	for (i = 1; i <= n; i++)
	//	{
	//		ret = ret * i;
	//	}
	//	sum = sum + ret;
	//}
	//printf("%d", sum);


	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//printf("请输入阶乘:");
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{	
	//	ret = ret * i;
	//	printf("%d", i);
	//	if (i ==n)
	//	{
	//		break;
	//	}
	//	else
	//	{
	//		printf("*");
	//	}
	//}
	//printf("=%d", ret);

	//二分查找方法
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 1;//查找元素
	//int as = sizeof(arr) / sizeof(arr[0]);//计算元素的个数
	//int left = 0;//左下标
	//int right = as-1;//右下标
	//
	//while (left <= right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else
	//	{
	//		printf("找到了,下标是:%d", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("找不到\n");
	//}


	//char arr1[] = "shirongzheng haoshuai!!!";
	//char arr2[] = "########################";
	//int left = 0;
	//int right = strlen(arr1) - 1;//如果是用sizeof(arr1)/sizeof(arr1[0])-2,因为字符串里面有隐藏的\n
	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	left++;
	//	right--;
	//	Sleep(500);
	//	//system("cls");//执行系统命令的一个函数-cls-清空屏幕
	//	printf("%s", arr2);
	//	printf("\n");
	//}
	//

	int password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", &password);
		if (strcmp(password,"123456")==0)//if(password=="123456")不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("登录失败\n");
		}
	}
	if (i == 3)
	{
		printf("密码三次均错误，退出程序\n");
	}
	return 0;
}