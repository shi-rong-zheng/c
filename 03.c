#define _CRT_SECURE_NO_WARNINGS 1

//求1-100之间的所有的9
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//			printf("%d\t", i);
//			if (count % 5 == 0)
//			{
//				printf("\n");
//			}
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//			printf("%d\t", i);
//			if (count % 5 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5-1/6....+1/99-1/100 //两种方法
//#include<stdio.h>
//int main()
//{
	//第一种方法:

	//int i = 0;
	//double sum = 0.0;
	//int flag=1;
	//for (i = 1; i <= 100; i++)
	//{
	//	sum += flag * 1.0 / i;//实现   - + - + - +...  牛逼的思路  /    (i%2 ? 1 : -1)
	//	flag = -flag;
	//}
	//printf("sum=%lf", sum);


	//第二种方法:分成求偶项

	//int i, j;
	//float sum = 0;
	//float sum1 = 0;
	//float sum2 = 0;
	//for (i = 1; i < 100; i += 2)
	//{
	//	sum1 += 1.0 / i;
	//}
	//for (j = 2; j <= 100; j += 2)
	//{
	//	sum2 += 1.0 / j;
	//}
	//sum = sum1 - sum2;
	//printf("sum=%f", sum);

	//比较10个数中的最大数
	//假设第一个数是max，然后用每一个数和他作比较
	//int arr[] = { -1,-2,-3,-4100,-5,-6,-99,-8,-9,-10 };
	//int i = 0;
	//int max=arr[0];
	//int as = sizeof(arr) / sizeof(arr[0]);
	//for (i = 1; i < as; i++)
	//{
	//	int temp = 0;
	//	if (arr[i] > max)
	//	{
	//		max = arr[i];
	//	}
	//}
	//printf("max=%d\n",max);

	//九九乘法表
	//int i = 0;
	//int j = 0;
	//for (i = 1; i <= 9; i++)
	//{
	//	for (j = 1; j <= i; j++)
	//	{
	//		printf("%d*%d=%d\t ", i, j, i * j);
	//	}
	//	printf("\n");
	//}


	

//	return 0;
//}
//#include<stdio.h>
//
//#include<time.h>
//void meun()
//{
//	printf("*****************************************************\n");
//	printf("*******   1.进入游戏            0.退出游戏   ********\n");
//	printf("*****************************************************\n");
//}
//void game()
//{
//	int ret = 0;
//	ret = rand()%100+1;
//	int guess = 0;
//	
//	while (1)
//	{
//		printf("请猜数(0到100之内)>:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//			
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//			
//		}
//		else if (guess == ret)
//		{
//			printf("恭喜你，猜对了！！！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//时间戳:当前计算机的时间-计算机的起始时间(1970.1.1.0:0.0)=(xxxx)秒
//	do {
//		meun();
//		printf("请选择(0或1)>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入！！\n");
//			break;
//		}
//
//	} while(input);
//
//	return 0;
//}

#include<stdio.h>
int main()
{
	char input[20] = { 0 };
again:
	printf("请输入(sss):");
	scanf("%s", &input);
	if (strcmp(input,"sss")==0)
	{
		printf("匹配成功\n");
		printf("大傻子\n");

	}
	else
	{
		printf("匹配失败，请再输入一次\n");
		goto again;
	}

	return 0;
}