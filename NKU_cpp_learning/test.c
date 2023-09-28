#define _CRT_SECURE_NO_WARNINGS
////#include<iostream>//i-o-stream 输入输出流
////#include<stdio.h>
////using namespace std;
////int main()
////{
////	cout << "   *" << endl;
////	cout << "  ***" << endl;
////	cout << " *****" << endl;
////	cout << "*******" << endl;
////	cout << " *****" << endl;
////	cout << "  ***" << endl;
////	cout << "   *" << endl;
////
////	
////	return 0;
////}
//
////int main()
////{
////	int i = 0;
////	int arr[10] = { 0 };
////	for (i = 0; i < 10; i++)
////	{
////		cin >> arr[i];
////	}
////	int count = 0;
////	int height = 0;
////	cin >> height;
////	for (i = 0; i < 10; i++)
////	{
////		if (arr[i] - 30 <= height)
////		{
////			count++;
////		}
////	}
////	cout << count;
////	return 0;
////}
//
//
//#include<stdio.h>
////int main()
////{
////	int arr1[10001] = { 1 };
////	int arr2[202] = { 0 };
////	int l, m, i,j;
////	scanf("%d %d", &l, &m);
////	for (i = 0; i < 2*m; i+=2)
////	{
////		scanf("%d %d", &arr2[i], &arr2[i+1]);
////	}
////	for (i = 0; i < 2*m; i += 2)
////	{
////		//printf("%d %d\n", arr2[i], arr2[i + 1]);
////		for (j = arr2[i]; j < arr2[i + 1]; j++)
////		{
////			arr1[j] = 0;
////		}
////	}
////	int count = 0;
////	for (i = 0; i <= l; i++)
////	{
////		if (arr1[i] == 0)
////		{
////			count++;
////		}
////	}
////	printf("%d", count);
////	return 0;
////}
//
//
//#include<stdio.h>
////int main()
////{
////	double x, a, y, b;
////	double z;
////	scanf("%lf%lf%lf%lf", &x, &a, &y, &b);
////	z = 1.0*(y * b - x * a) / (b - a);//这里必须*1.0，否则无法正常浮点数计算
////	if(z>0)
////		printf("%.2lf", z);
////	else
////		printf("%.2lf", -z);
////	return 0;
////}
//
////#include<iostream>//i-o-stream 输入输出流
////using namespace std;
////#include<stdio.h>
////int main()
////{
////	int arr[5] = { 0 };
////	int i = 0;
////	int count = 0;
////	for (i = 0; i < 5; i++)
////	{
////		cin >> arr[i];
////	}
////	arr[1] += arr[0] / 3;
////	arr[4] += arr[0] / 3;
////	count += arr[0] % 3;
////	arr[0] /= 3;
////	for (i = 1; i < 4; i++)
////	{
////		arr[i + 1] += arr[i] / 3;
////		arr[i - 1] += arr[i] / 3;
////		count += arr[i] % 3;
////		arr[i] /= 3;
////	}
////	arr[3] += arr[4] / 3;
////	arr[0] += arr[4] / 3;
////	count += arr[4] % 3;
////	arr[4] /= 3;
////	
////	for (i = 0; i < 5; i++)
////	{
////		cout<<arr[i]<<" ";
////	}
////	cout << endl << count;
////	return 0;
////}
//
//
//#include<stdio.h>
//#include<string.h>
////int main()
////{
////	char arr[1000] = { 0 };
////	gets(arr);
////	printf("%s", arr);
////	return 0;
////}
//
//#include <stdio.h>
//
////int main() {
////    char input[100];
////    gets(input);
////
////    printf("%c%c%c", input[2],input[1],input[0]);
////
////    return 0;
////}
//
//#include <stdio.h>
//int main()
//{
//	double x1, y1, x2, y2, x3, y3;
//	scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
//	double s = (x1*y2 - x1*y3 + x2*y3 - x2*y1 + x3*y1 - x2*y2)*0.5;
//	printf("%.2lf", s);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = pow(2, n);
//	printf("%d", a);
//}

#include <stdio.h>

int main()
{
	
	int x,money;
	char c;
	scanf("%d %c", &x, &c);
	money = 8;
	if (c == 'y')
	{
		money += 5;
	}
	if (x <= 1000)
	{
		printf("%d", money);
	}
	else
	{
		int y = x - 1000;
		int z = y / 500;
		if (y % 500 == 0)
		{
			printf("%d", money+4*z);

		}
	}
	return 0;
}
