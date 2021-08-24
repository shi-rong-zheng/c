#define _CRT_SECURE_NO_WARNINGS 1
//统计二进制中1的个数  比如: 15   0000 1111 4个1 
//n=n&(n-1)
// n
// 13
// 1101 n
// 1100 n-1
// 1100 n
// 1011 n-1
// 1000 n
// 0111 n-1
// 0000 n
//#include<stdio.h>
//int fun(int n)
//{
//	int count = 0;
//	while (n)
//	{
//			n = n & (n - 1);
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	printf("从键盘输入一个数:>");
//	scanf("%d", &n);
//	int set = fun(n);
//	printf("%d ", set);
//	return 0;
//}

//方法二
//00000000000000000000000000001111
//#include<stdio.h>
//int count_one(int n)
//{
//	int i;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	printf("从键盘输入一个数:>");
//	scanf("%d", &n);
//	int set = count_one(n);
//	printf("%d", set);
//	return 0;
//}

//思路:
//m和n中两个二进制中不同位数的个数(两个数都是32bit)
//0100  4   
//0101  5
//0001  4^5 
//0001  tmp
//0000  tmp-1 
//0000  tmp
    
//#include<stdio.h> 
//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count=get_diff_bit(m, n);
//	printf("count=%d", count);
//	return 0;
//}

//打印二进制的奇数位和偶数位
//00000000000000000000000000001010
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int tmp = 0;
//    printf("从键盘输入一个数:>");
//    scanf("%d", &n);
//    printf("奇数位:\n");
//    for (i = 30; i >=0; i-=2)
//    {
//        printf("%d ", (n >> i) & 1);
//    }
//    printf("\n");
//    printf("偶数位:\n");
//    for (i = 31; i >= 1; i -= 2)
//    {
//        printf("%d ", (n >> i) & 1);
//    }
//    return 0;
//}

//打印某一个数的二进制数
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    printf("请输入一个数:>");
//    scanf("%d", &n);
//    for (i = 31; i >=0; i--)
//    {
//        printf("%d", (n >>i) & 1);
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int i, j;
//    printf("请输入几几乘法表:>\n");
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%-4d", i, j, i * j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//递归方式:
//#include<stdio.h>
//int fun(int n)
//{
//    if (n > 1)
//    {
//        return n * fun(n - 1);
//    }
//    else
//    {
//        return 1;
//    }
//}
//int main()
//{
//    int n = 0;
//    printf("请输入阶乘数:>");
//    scanf("%d", &n);
//    int ret = fun(n);
//    printf("ret=%d", ret);
//    return 0;
//}

//非递归方式:
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int ret = 1;
//    int i = 0;
//    printf("请输入阶乘:>");
//    scanf("%d", &n);
//    {
//        while (i<n)
//        {
//            if (n > 1)
//            {
//                ret = (i + 1) * ret;
//                i++;
//            }
//            else
//            {
//                ret = 1;
//                break;
//            }
//        }
//    }
//    printf("ret=%d", ret);
//    return 0;
//}

//将参数字符串中的字符反向排列（不能使用c函数库中的字符串操作函数）
