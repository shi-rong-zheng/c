#define _CRT_SECURE_NO_WARNINGS 1
//数组
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		printf("arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}


//冒泡排序
//#include<stdio.h>
//int bubble_sort(int arr[], int as)
//{
//	int i = 0;
//	for (i = 0; i < as-1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int n = 0;
//		for (n = 0; n < as - 1 - i; n++)
//		{
//			if (arr[n] < arr[n + 1])
//			{
//				int temp = arr[n];
//				arr[n ] = arr[n + 1];
//				arr[n + 1] = temp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)//代码的优化（效率比原来高）
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,1,2,3,4,5,6,7,8 };
//	int i = 0;
//	int as = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, as);
//	for (i = 0; i < as; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//} 
