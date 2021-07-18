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
