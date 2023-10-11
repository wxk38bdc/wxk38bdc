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

//int main()
//{
//	
//	int x,money;
//	char c;
//	scanf("%d %c", &x, &c);
//	money = 8;
//	if (c == 'y')
//	{
//		money += 5;
//	}
//	if (x <= 1000)
//	{
//		printf("%d", money);
//	}
//	else
//	{
//		int y = x - 1000;
//		int z = y / 500;
//		if (y % 500 == 0)
//		{
//			printf("%d", money+4*z);
//		}
//		else
//		{
//			printf("%d", money + 4 * (z+1));
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	if ((y <= 1) && (y >=- 1) && (x <=  1) && (x >= - 1))
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0, n = 0;
//	int arr[400] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < 3 * n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int gold = 0, silver = 0, bronze = 0;
//	for (i = 0; i < 3 * n - 2; i += 3)
//	{
//		gold += arr[i];
//	}
//	for (i = 1; i < 3 * n - 1; i += 3)
//	{
//		silver += arr[i];
//	}
//	for (i = 2; i < 3 * n ; i += 3)
//	{
//		bronze += arr[i];
//	}
//	int total = gold + silver + bronze;
//	printf("%d %d %d %d", gold, silver, bronze,total);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int m = 0, n = 0, i = 0, sum = 0;
//	scanf("%d%d", &m, &n);
//	for (i = m; i <= n; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum += i;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float n = 0.0f;
//	scanf("%f", &n);
//	int i = 0;
//	float arr[50] = { 0 };
//	for (i = 0; i < n * 2; i++)
//	{
//		scanf("%f", &arr[i]);
//	}
//	float x = arr[1] / arr[0] * 1.0;
//	float y[21] = { 0.0 };
//	for (i = 2; i < n * 2; i += 2)
//	{
//		float y = arr[i + 1] / arr[i] * 1.0;
//		if (y - x > 0.05)
//		{
//			printf("better\n");
//		}
//		else if (x - y > 0.05)
//		{
//			printf("worse\n");
//		}
//		else
//		{
//			printf("same\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()//B2067药房管理
//{
//	int m = 0, n = 0;
//	scanf("%d%d", &m, &n);
//
//	return 0;
//}

//#include<string.h>
////输入一行字符，统计出其中数字字符的个数
//int main()
//{
//	char arr[300];
//	scanf("%[^\n]%*c", arr);
//	int count = 0;
//	int m = 0;
//	m = strlen(arr);
//	for (int i = 0; i <m ; i++)
//	{
//		if (arr[i] >= '0' && arr[i] <= '9')
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	//创建数组并输入
//	char arr[1200];
//	scanf(%s,arr);
//	int sz = strlen(arr);
//	int i = 0;
//	int str[26] = { 0 };
//	//遍历数组，统计每个字母出现的次数
//	for (i = 0; i < sz; i++)
//	{
//		str[(int)arr[i] - 97] += 1;
//	}
//	//遍历数组，找到第一个出现一次的字母
//	int flag = 0;
//	for (i = 0; i <sz; i++)
//	{
//		if(str[(int)arr[i] - 97] ==1)
//		{
//			printf("%c", arr[i]);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("no");
//	return 0;
//}

//int main()
//{
//	char arr1[1000];
//	char arr2[1000];
//	double a;
//	scanf("%lf", &a);
//	scanf("%s", arr1);
//	scanf("%s", arr2);
//	int i = 0, count = 0;
//	int sz = strlen(arr1);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr1[i] == arr2[i])
//		{
//			count++;
//		}
//	}
//	double b = 1.0 * count / sz;
//	if (b >= a)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//int main()
//{
//	int n, i;
//	scanf("%d", &n);
//	for (i = 0; i < 2 * n; i+=2)
//	{
//		char arr1[10]={0};
//		char arr2[10]={0};
//		scanf("%s", arr1);
//		scanf("%s", arr2);
//		if (strlen(arr1) == strlen(arr2))
//		{
//			printf("Tie\n");
//		}
//		else if (strlen(arr1) == 4 && strlen(arr2) == 8 || strlen(arr1) == 8 && strlen(arr2) == 5 || strlen(arr1) == 5 && strlen(arr2) == 4)
//		{
//			printf("Player1\n");
//		}
//		else
//		{
//			printf("Player2\n");
//		}
//	}
//	return 0;
//}

//void reverse(char arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len / 2; i++)
//	{
//		char tmp = arr[i];
//		arr[i] = arr[len - 1 - i];
//		arr[len - 1 - i] = tmp;
//	}
//}
//int main()
//{
//	char arr[60];
//	scanf("%s", arr);
//	int len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] >= 'a' && arr[i] <= 'z')
//		{
//			arr[i] = (int)arr[i] - 32;
//		}
//		else if (arr[i] >= 'A' && arr[i] <= 'Z')
//		{
//			arr[i] = (int)arr[i] + 32;
//		}
//	}
//	reverse(arr, len);
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] >= 'a' && arr[i] <= 'w'|| arr[i] >= 'A' && arr[i] <= 'W')
//		{
//			arr[i] = arr[i] +3;
//		}
//		else
//		{
//			arr[i]= arr[i] - 23;
//		}
//	}
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	char s1[23];
//	char s2[23];
//	scanf("%s", s1);
//	scanf("%s", s2);
//	if (strstr(s1, s2) != NULL)
//	{
//		printf("%s is substring of %s",s2,s1);
//	}
//	else if (strstr(s2, s1) != NULL)
//	{
//		printf("%s is substring of %s", s1, s2);
//	}
//	else
//	{
//		printf("No substring");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[35];
//	scanf("%s", arr);
//	int len = strlen(arr);
//	if (arr[len - 2] == 'e' && arr[len - 1] == 'r')
//	{
//		arr[len - 2] = '\0';
//		printf("%s", arr);
//	}
//	else if (arr[len - 2] == 'l' && arr[len - 1] == 'y')
//	{
//		arr[len - 2] = '\0';
//		printf("%s", arr);
//	}
//	else if (arr[len - 3] == 'i' && arr[len - 2] == 'n' && arr[len - 1] == 'g')
//	{
//		arr[len - 3] = '\0';
//		printf("%s", arr);
//	}
//	else
//	{
//		printf("%s", arr);
//	}
//	return 0;
//}

#include <stdio.h>
#include<string.h>
int main()
{

	return 0;
}