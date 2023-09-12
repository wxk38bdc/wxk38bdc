#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<windows.h>

//int main()
//{
//	unsigned int i = 020462340677;
//		printf("%d\n", i);
//	return 0;
//}

//检测大端字节序/小端字节序
//int main()
//{
//	int a = 1;
//	int b = *(char*)&a;
//	printf("%d\n", b);//b=1，表明int类型为小端字节序存储
//	return 0;
//}

////exercise_1
//int main()
//{
//	char a = -1;//-1
//	signed char b = -1;//-1
//	unsigned char c = -1;//255
//	printf("a=%d,b=%d,c=%d ", a, b, c);//%d对应有符号整型，使用char类型要进行整形提升
//	return 0;
//}

//exercise_2
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}

//exercise_3
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//i=0 -> i=4294967295
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));//255
////strlen是求字符串的长度，关注的是字符串中'\0'（数字0）之前出现多少字符
//	return 0;
//}

//输入整数数组，实现一个函数，调整奇数位于偶数之前
//思路：在函数中创建3个数组，1个放奇数，1个放偶数，1个输出
// 写的像shit mountains，但终究是写出来了
//
//int main()
//{
//	int arr[9] = { 1,3,5,7,9,11,13,15,17};
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < 9; i++)
//	{
//		if (arr[i] % 2 == 1)
//		{
//			arr1[j] = arr[i];
//			j++;
//		}
//		else if (arr[i] % 2 == 0)
//		{
//			arr2[k] = arr[i];
//			k++;
//		}
//	}
//	int j1 = j;
//	for (i = 0,j=0; i < j1; i++,j++)
//	{
//		arr[i] = arr1[j];
//	}
//	for (i = j,k=0; i < 9; i++,k++)
//	{
//		arr[i] = arr2[k];
//	}
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//升序排列数组
//怎么优化？
//int main() 
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = sizeof(arr) / sizeof(arr[0]);
//	//输入
//	for (i = 0; i < j; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//调整
//	while (((arr[0]<=arr[1])&& (arr[1] <= arr[2])&& (arr[2] <= arr[3])&& (arr[3] <= arr[4])&& (arr[4] <= arr[5])&& (arr[5] <= arr[6])&& (arr[6] <= arr[7])&& (arr[7] <= arr[8])&& (arr[8] <= arr[9]))!=1)
//	{
//		for (i = 0; i < j-1; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int tmp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//	}
//	//打印
//	for (i = 0; i <j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//指针数组的学习
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", parr[i][j]);//注意： *(p+i)<=>p[i],并且*(p[i]+j)<=>p[i][j]
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int(*p)[10] = &arr;
//	int* q = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", *(*p + i));//使用起来很别扭
//		printf("%d ", *(q + i));//正常字符指针的用法
//	}
//	return 0;
//}

//打印二维数组
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////数组指针正确用法
//void print2(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));//第一种写法
//			printf("%d ", p[i][j]);//第2种写法
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,5,6,9,8,7,5,4,1,0,2,3,6 };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);//arr指首元素（第一行）的地址，因为是二维数组
//	return 0;
//}

//函数指针
int test(const char* str)
{
	printf("ok\n");
	return 0;
}
int main()
{
	//int (*pf)(const char*) = test;//两种写法均可
	int (*pf)(const char*) = &test;
	(*pf)("abc");
	pf("abc");
	test("abc");
	return 0;
}
