/*#include<stdio.h>
int main()
{
	int arr1[] = { 1,4,8,11,9,5,6 };
	int i;
	for (i = 0; i <= 6; i++)
{
	printf("arr1[%d]",arr1[i]);
}
	for (i = 6; i >= 0; i--)
	printf("arr1[%d]", arr1[i]);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int m[] = { 10,20,30,40,50 };
	int i;
	//printf(" the ordering of array:\n");
	for (i = 0; i < 5; i++)
	{
		printf("the number of m[% d] = % d\n", i, m[i]);
	}
	//printf(" the ordering of array:\n");
	for (i = 4; i >= 0; i--)
	{
		printf("the number of m[% d] = % d\n", i, m[i]);
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int i, j;
	int arr1[] = { 1,4,8,11,9,5,6 };
	int arr2[] = { 3,7,11,5,9,1 };
	{
		for (i = 6; i >= 0; i--)
			printf("arr1[%d]", arr1[i]);
		printf("\t");
	}
	for (j = 5; j >= 0; j--)
		printf("arr2[%d]", arr2[j]);
}*/
/*#include<stdio.h>
int main()
{
	int i, j;
	int teap;
	int arr1[7] = { 1,4,8,11,9,5,6 };
	int arr2[6] = { 3,7,11,5,9,1 };
	printf("arr2:");
	for (j = 5; j >= 0; j--)
	printf("%d", arr2[j]);
    printf("\t");
	printf("arr1:");
	for (i = 6; i >=0; i--)
	printf("%d", arr1[i]);
	return 0;
}*/

#include<stdio.h>
int main()
{
	int i = 0, j = 0;
	int arr1[] = { 1,4,8,11,9,5,6 };
	int arr2[] = { 3,7,11,5,9,1 };
	printf("×ªÖÃsrr1£º");
	for (i = 0; i < 1; i++)
	{
		fof(j = 0; j < 7; j++)
		{
			printf("%d\t", arr1[6 - i]);
			printf("×ªÖÃsrr2£º");
		}
		for (j = 0; j <= 5; j++)
			printf("%d\t", arr2[5 - j]);
	}
}
