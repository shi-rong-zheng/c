#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("******************  扫 雷  ***************\n");
	printf("******************************************\n");
	printf("*****************  1.play  ***************\n");
	printf("*****************  0.exit  ***************\n");
	printf("******************************************\n");

}
void game()
{

}
void test()
{
	int input = 0;
	menu();
	do
	{
		printf("请选择(0或1):>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入");
		}
	} while (input);
	
}
int main()
{
	test();
	return 0;
}
 