#define _CRT_SECURE_NO_WARNINGS

//int main()
//{
//	printf("Hello World!\n");
//	return 0;
//}

//打印从32到127的ASCII码
//int main()
//{
//	int i = 0;
//	for(i=32;i<=127;i++)
//	{
//		printf("%c\n",i);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	return 0;
//}
////实现两个矩阵的相乘
//int main()
//{
//	//输入矩阵的行数，列数
//	int n, m, k, i, j;
//	scanf("%d %d%d", &n, &m, &k);
//    int a[100][100], b[100][100], c[100][100];
//	//输入矩阵
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<m;j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<k;j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//	//计算矩阵相乘
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<k;j++)
//		{
//			c[i][j] = 0;
//			for(int t=0;t<m;t++)
//			{
//				c[i][j] += a[i][t] * b[t][j];
//			}
//		}
//	}
//	//输出矩阵
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<k;j++)
//		{
//			printf("%d ", c[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//输出顺时针旋转90度的矩阵
//#include <stdio.h>
//int main()
//{
//	int n,m, i, j;
//	scanf("%d %d", &n, &m);
//	int a[101][101];
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<m;j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for(j = 0; j < m; j++)
//	{
//		for(i=n-1;i>=0;i--)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//输出逆时针旋转90度的矩阵
//int main()
//{
//	int n,m, i, j;
//	scanf("%d %d", &n, &m);
//	int a[101][101];
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<m;j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for(j = m-1; j >= 0; j--)
//	{
//		for(i=0;i<n;i++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//像素点模糊化处理
//int main()
//{
//	int n,m, i, j;
//	scanf("%d %d", &n, &m);
//	double a[101][101];
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%lf", &a[i][j]);
//		}
//	}
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
//			{
//				printf("%.0lf ", a[i][j]);
//			}
//			else
//			{
//				printf("%.0lf ",(a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1])/5*1.0);
//			}
//			
//		}
//		printf("\n");
//	}
//	//printf("%.0lf", 5.6);
//	return 0;
//}

//NKUoj test1
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for(int i=2*n;i>0;i-=2)
//	{
//		for(int j=0;j<(2*n-i)/2;j++)
//		{
//			printf(" ");
//		}
//		for(int k=0;k<i;k++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdbool.h>
//int main()
//{
//	bool flag = true;
//	if (flag)
//		printf("true\n");
//	else
//		printf("false\n");
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d %d %d ", a+b, a-b, a*b);
//	if (b == 0)
//		printf("error");
//	else
//	{ 
//		printf("%d", a / b);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int max=a, min=a;
//	if(b > max)
//		max = b;
//	if(c > max)
//		max = c;
//	if(b<min)
//		min = b;
//	if(c<min)
//		min = c;
//	printf("%d %d %d", max, min,a+b+c);
//	return 0;
//}

//int main()
//{
//	int a[3];
//	int i;
//	for(i=0;i<3;i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for(i=0;i<3;i++)
//	{
//		if (a[i] >= 90 && a[i] <= 100)
//			printf("A ");
//		else if(a[i] >= 80 && a[i] < 90)
//			printf("B ");
//		else if(a[i] >= 70 && a[i] < 80)
//			printf("C ");
//		else if(a[i] >= 60 && a[i] < 70)
//			printf("D ");
//		else
//			printf("E ");
//	}
//	printf("%d ", (a[0] + a[1] + a[2])/3);
//	return 0;
//}

//十进制数转换为二进制数
//#include <stdio.h>
//int main()
//{
//	int a, i=0;
//	int arr[100];
//	scanf("%d",&a);
//	while(a)
//	{
//		arr[i]= a % 2;
//		a /= 2;
//		i++;
//	}
//	for(int j=i-1;j>=0;j--)
//	{
//		printf("%d", arr[j]);
//	}
//	return 0;
//}

//#include <string.h>
//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//    return 0;
//}

#include <stdio.h>
int main()
{
	return 0;
}