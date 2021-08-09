<<<<<<< HEAD
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

//冒泡排序
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 6,5,4,3,2,1};
//	int i = 0;
//	int az = sizeof(arr) / sizeof(arr[0]);
//	int j = 0;
//	int len = 0;
//	for (i = 0; i < az; i++)
//	{
//		for (j = 0; j < az-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}	
//	}
//	for (len = 0; len < az; len++)
//	{
//		printf("%d ", arr[len]);
//	}
//	return 0;
//}

//#include<stdio.h>
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < sz - 1; i++)
//	//{
//	//	for (j = 0; j < sz - 1 - i; j++)
//	//	{
//	//		if (arr[j] < arr[j + 1])
//	//		{
//	//			int temp = arr[j];
//	//			arr[j] = arr[j + 1];
//	//			arr[j + 1] = arr[j];
//	//		}
//	//	}
//	//}
//	//int left = 0;
//	//int right = sz - 1;
//
//	//while (left < right)
//	//{
//	//	int temp = arr[left];
//	//	arr[left] = arr[right];
//	//	arr[right] = temp;
//
//	//	left++;
//	//	right--;
//	//	
//	//}
//
//	int i = 0;
//	int left = 0;
//	int right = sz - 1;
//	for (i = 0; i <= sz / 2; i++)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right]=temp;
//
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//初始化0
//	//print(arr, sz);//打印
//	Reverse(arr,sz);
//	print(arr, sz);
//	return 0;
//}

//数组长度相同，将两个数组中的值进行交换
//#include<stdio.h>
//void swap(int A[], int B[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int temp = A[i];
//		A[i] = B[i];
//		B[i] = temp;
//	}
//}
//void print(int A[], int B[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	printf("A[]: ");
//	for (i = 0; i < sz; i++)
//	{
//		
//		printf("%-2d ", A[i]);
//	}
//	printf("\n");
//	printf("B[]: ");
//	for (j = 0; j < sz; j++)
//	{
//		printf("%-2d ", B[j]);
//	}
//
//}
//int main()
//{
//	int A[] = { 1,2,3,4,5 };
//	int B[] = { 6,7,8,9,10 };
//	int sz = sizeof(A) / sizeof(A[0]);
//	swap(A, B, sz);
//	print(A, B, sz);
//	return 0;
//}

=======
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
>>>>>>> 57f4aa6604ee343de8f88266e1750166661a06da
