#include<stdio.h>
void add(int aa);
int main()
{
	int a;
	printf("请输入：");
	scanf_s("%d", &a);
	add(a);
	return 0;
}
void add(int aa)
{
	int i = 0, j = 0;
	int arr1[7] = { 1,4,8,11,9,5,6 };
	int arr2[6] = { 3,7,11,5,9,1 };
	float m, n, p;
	int max1, max2, max3;
	max1 = 0, max2 = 0, max3 = 0;
	float sum1, sum2, sum3;
	sum1 = 0, sum2 = 0, sum3 = 0;
	int ass[3][6] = { {2456,1847,1243,1600,2346,2757 },{3045,2018,1725,2020,2458,1436},{1427,1175,1046,1976,1477,2018} };
	ass[i][j] = max1;
	ass[i][j] = max2;
	ass[i][j] = max3;
	switch (aa)
	{
	case 1:

		for (i = 0; i < 1; i++)
		{
			for (j = 0; j <= 5; j++)
			{
				sum1 += ass[i][j];
				m = sum1 / 6;
			}
			printf("%.2f\n", m);
		}
		for (i = 1; i < 2; i++)
		{
			for (j = 0; j <= 5; j++)
			{
				sum2 += ass[i][j];
				n = sum2 / 6;
			}
			printf("%.2f\n", n);
		}
		for (i = 2; i < 3; i++)
		{
			for (j = 0; j <= 5; j++)
			{
				sum3 += ass[i][j];
				p = sum3 / 6;
			}
			printf("%.2f\n", p);
		}
		break;


	case 2:
		for (i = 0; i < 1; i++)
			for (j = 0; j <= 5; j++)
			{
				if (ass[i][j] > max1)max1 = ass[i][j];
			}
		printf("max1=%d\n", max1);
		for (i = 1; i < 2; i++)
			for (j = 0; j <= 5; j++)
			{
				if (ass[i][j] > max2)max2 = ass[i][j];
			}
		printf("max2=%d\n", max2);
		for (i = 2; i < 3; i++)
			for (j = 0; j <= 5; j++)
			{
				if (ass[i][j] > max3)max3 = ass[i][j];
			}
		printf("max3=%d\n", max3);
		break;

	/*case 3:
		printf("arr1:");
		for (i = 0; i <= 6; i++)
			printf("%d", arr1[6 - i]);
		printf("\t");
		printf("arr2:");
		for (j = 0; j <= 5; j++)
			printf("%d", arr2[5 - j]);
		break;*/

	default:
		printf("不在范围内");
		break;
	}
}
	
