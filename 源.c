/*#include<stdio.h>
int main()
{
	int i,j;
	int arr1[7] = { 1,4,8,11,9,5,6 };
	int arr2[6] = { 3,7,11,5,9,1 };
	printf("arr1:");
	for (i = 0; i <= 6; i++)
			printf("%d", arr1[6 - i]);
	printf("\t");
	printf("arr2:");
	for (j = 0; j <= 5; j++)
		printf("%d", arr2[5 - j]);
	return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i=0;
	int j = 6;
	int teap=0;
	int arr1[7] = { 1,4,8,11,9,5,6 };
	for (; i<j; ++i, --j)
	{
		arr1[i] = teap;
		arr1[i] = arr1[j];
		arr1[j] = teap;
	}
	for (i = 0; i <= 6; ++i)
		printf("%d", arr1[i]);
	return 0;


}
