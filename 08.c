#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>//system
#include<string.h>//strcmp
int main()
{
	int a = 3;
	int b = 5;
	//printf("原函数:a=%d b=%d\n", a, b);  //溢出的问题，当两个数叫起来大于最大值时，会溢出（只能解决数字比较小的数）
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("交换后:a=%d b=%d\n", a, b);
	//a = a + b;
	
	//printf("原函数:a=%d b=%d\n", a, b);// ^ 按（二进制）位异或 a (011)  b(101)
	//a = a ^ b;//a (110) b (101) //异为1，同为0
	//b = a ^ b;//a (110) b (011)
	//a = a ^ b;//a(101)  b (011)
	//printf("交换后:a=%d b=%d\n", a, b);

	//
	//int arr[] = {1,2,3,4,5,1,2,3,4};
	//int sz = sizeof(arr) / sizeof(arr[1]);
	//int i = 0;
	//for (i = 0; i < sz; i++)
	//{
	//	int j = 0;
	//	int count = 0;
	//	for (j = 0; j < sz; j++)
	//	{
	//		if (arr[i] == arr[j])
	//		{
	//			count++;
	//		}
	//	}
	//	if (1 == count)
	//	{
	//		printf("单身狗是%d", arr[i]);
	//		break;
	//	}
	//}

	//  记着:    0^n=n;0^0=0;n^n=0;
	//int arr[] = { 1,2,3,4,5,1,2,3,4,5,7 };
	//int sz = sizeof(arr) / sizeof(arr[1]);
	//int i = 0;
	//int ret = 0;
	//for (i = 0; i < sz; i++)
	//{
	//	ret = ret ^ arr[i];
	//}
	//printf("单身狗是%d", ret);

	//关机小程序
	 
	//char input[20] = { 0 };
	//system("shutdown -s -t 60");
	//again:
	//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	//	printf("请输入密码:");
	//	scanf("%s", &input);
	//	while (1)
	//	{
	//		if (strcmp(input, "我是猪")==0)
	//		{
	//			system("shutdown -a");
	//			printf("恭喜猪先生，已取消关机\n");
	//			break;
	//		}
	//		else
	//		{
	//			printf("输入错误，请再输一次！\n");
	//			goto again;
	//		}
	//	}


	return 0;
}