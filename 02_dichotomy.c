#define _CRT_SECURE_NO_WARNINGS 1

//两分法查数
//#include<stdio.h>
//int find(int arr[],int az,int k)
//{
//	int left = 0;
//	int right = az - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] == k)
//		{
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到！\n");
//	}
//}
//int main()
//{
//	int k = 0;
//	printf("请输入您要查找的数:>");
//	scanf("%d", &k);
//	int arr[] = {1,2,3,4,5,19,7,45,9};
//	int ret = 0;
//	int az = sizeof(arr) / sizeof(arr[0]);
//	ret = find(arr,az,k);
//	printf("这个数的下标是：%d\n", ret);
//	printf("您要查找的数是：%d\n", arr[ret]);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//
//	return 0;
//}