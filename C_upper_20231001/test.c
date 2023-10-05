#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//#include<windows.h>
//#include<iostream>
//#include<ctype.h>
//using namespace std;

//int is_left_move(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = arr1[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//		if (strcmp(arr2, arr1) == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret= is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n = 0, i = 0, s = 0, num = 0;
//	double time = 0.0, x = 0.0, y = 0.0;
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		cin >> x >> y >> num;
//		s = sqrt(x * x + y * y);
//		time += 2 * s / 50  + num * 1.5;
//	}
//	if (time - (int)time != 0)
//		cout << (int)time + 1;
//	else
//		cout << time;
//	return 0;
//}



//#include <iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    double sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        double x, y;
//        int p;
//        scanf("%lf%lf%d", &x, &y, &p);
//        double distance = sqrt(x * x + y * y);
//        sum += distance / 50 + p + distance / 50 + p * 0.5;
//    }
//    printf("%d\n", int(ceil(sum)));
//    return 0;
//}

//int main()
//{
//	int n;
//	int arr[100] = { 0 };
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	int ret = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int ge = arr[i] % 10;
//		arr[i] /= 10;
//		int shi = arr[i] % 10;
//		arr[i] /= 10;
//		int bai = arr[i] % 10;
//		arr[i] /= 10;
//		int qian = arr[i] % 10;
//		arr[i] /= 10;
//		if (ge - shi - bai - qian > 0)
//			ret++;
//	}
//	cout << ret;
//	return 0;
//}

//int fib(int n)
//{
//    if (n == 1 || n == 0)
//        return 1;
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//    int n = 0, i = 0;
//    scanf("%d", &n);
//    double sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        sum += (double)fib(i+2) / (double)fib(i + 1);
//    }
//    printf("%.4lf", sum);
//    return 0;
//}

//int main()
//{
//	int n;
//	cin >> n;
//	cout << n*(n+1)/2;
//	return 0;
//}

//int main()
//{
//	int a, b, n;
//	cin >> a >> b >> n;
//	double c = 1.0 * a / b;
//	for (int i = 0; i < n; i++)
//	{
//		c *= 10.0;
//	}
//	printf("%d", (int)c % 10);
//	return 0;
//}

//int main()
//{
//	int a, b, ret=1;
//	cin >> a >> b;
//	for (int i = 0; i < b; i++)
//	{
//		ret *= a;
//		ret %= 7;
//	}
//	switch(ret)
//	{ 
//	case 1:
//		cout << "Monday" << endl; 
//		break;
//	case 2:
//		cout << "Tuesday" << endl;
//		break;
//	case 3:
//		cout << "Wednesday" << endl;
//		break;
//	case 4:
//		cout << "Thursday" << endl;
//		break;
//	case 5:
//		cout << "Friday" << endl;
//		break;
//	case 6:
//		cout << "Saturday" << endl;
//		break;
//	case 0:
//		cout << "Sunday" << endl;
//	}
//	return 0;
//}

//int main()
//{
//	int a, b,ret=1;
//	cin >> a >> b;
//	for (int i = 0; i < b; i++)
//	{
//		ret *= a;
//		ret %= 1000;
//	}
//	if (ret >= 100)
//		printf("%d", ret);
//	else if (ret < 100 && ret>10)
//		printf("0%d", ret);
//	else
//		printf("00%d", ret);
//	return 0;
//}

//int main()
//{
//	double h = 0;
//	cin >> h;
//	double total;
//	total = 2.99609375 * h;
//	cout << total << endl<< 0.0009765625 *h;
//	return 0;
//}

//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	while (n != 1)
//	{
//		if (n == 1)
//		{
//			break;
//		}
//		if (n % 2 == 1)
//		{
//			printf("%lld*3+1=%lld\n", n, n * 3 + 1);
//			n = n * 3 + 1;
//		}
//		if (n == 1)
//		{
//			break;
//		}
//		if (n % 2 == 0)
//		{
//			printf("%lld/2=%lld\n", n, n / 2);
//			n = n / 2;
//		}
//		if (n == 1)
//		{
//			break;
//		}
//	}
//	printf("End");
//	return 0;
//}

//int main()
//{
//	double x=0,n=0,sum=0;
//	scanf("%lf %lf", &x, &n);
//	for (double i = 0; i <= n; i++)
//	{
//		sum += pow(x, i);
//	}
//	printf("%.2lf", sum);
//	return 0;
//}

//int main()
//{
//	int n,sum=0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 7 == 0 || i == 17 || i == 27 || i == 37 || i == 47 || i == 57 || i == 67 || (70 <= i) && (i <= 79) || i == 87 || i == 97)
//		{
//			;
//		}
//		else
//		{
//			sum += i * i;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//    int L, R, c, d, ans, i;
//    scanf("%d%d", &L, &R);
//    for (i = L; i <= R; i++)
//    {
//        c = i;
//        while (c != 0)
//        {
//            d = c % 10;
//            c = c / 10;
//            if (d == 2)
//            {
//                ans++;
//            }
//        }
//    }
//    printf("%d", ans);
//    return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main() 
//{
//
//	return 0;
//}

//
//int 计算出现次数(int L, int R) {
//    int ans = 0;
//
//    for (int i = L; i <= R; i++) {
//        int 数字 = i;
//
//        while (数字 != 0) {
//            int 个位数 = 数字 % 10;
//            数字 = 数字 / 10;
//
//            if (个位数 == 2) {
//                ans++;
//            }
//        }
//    }
//
//    return ans;
//}
//
//int main() {
//    int L, R;
//    scanf("%d%d", &L, &R);
//
//    int 结果 = 计算出现次数(L, R);
//    printf("%d", 结果);
//
//    return 0;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d", a + b * c);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0, f = 0, i = 0, j = 0;
//	char c;
//	scanf("%d %d %c %d", &a, &b, &c, &f);
//	if (f != 0)
//	{
//		for (i = 0; i < a; i++)
//		{
//			for (j = 0; j < b; j++)
//			{
//				printf("%c", c);
//			}
//			printf("\n");
//		}
//	}
//	else
//	{
//		for (i = 0; i < a; i++)
//		{
//			for (j = 0; j < b; j++)
//			{
//				if (i == 0 || i == a - 1 || j == 0 || j == b - 1)
//				{
//					printf("%c", c);
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0, n = 0;
//	scanf("%d", &n);
//	for (i = n - 1; i > 1; i--)
//	{
//		if (n % i == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, x, y, count = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	for (x = 0; x <= c; x++)
//	{
//		y = (c - a * x) / b;
//		if (y < 0)
//		{
//			break;
//		}
//		if (a * x + b * y == c)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//void reverse(int arr[], int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		int tmp= arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int n = 5, i = 0;
//	int arr[101] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	reverse(arr,n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0, i = 0;
//	scanf("%d", &n);
//	int a[1001] = { 0 };
//	int b[1001] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		count += a[i] * b[i];
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int n = 0, i = 1, j = 1;
//	scanf("%d", &n);
//	int arr[5001] = { 1 };
//	for (i = 1; i <= n; i++)
//	{
//		for (j = i; j <= n; j++)
//		{
//			if (j % i == 0)
//			{
//				if (arr[j] == 0)
//				{
//					arr[j] = 1;
//				}
//				else if (arr[j] == 1)
//				{
//					arr[j] = 0;
//				}
//			}
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		if (arr[i] == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10001] = { 0 };
//	int n = 0, i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int x = 0, count = 0;
//	scanf("%d", &x);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == x)
//		{
//			printf("%d", i);
//			break;
//		}
//		count++;
//	}
//	if (count == n)
//	{
//		printf("-1");
//	}
//	return 0;
//}
#include <stdio.h>
int get_max(int* arr,int n)
{
	int MAX = arr[0];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] > MAX)
		{
			MAX = arr[i];
		}
	}
	return MAX;
}
int main()
{
	int n = 0, i = 0;
	int arr[101] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int MAX = get_max(arr,n);
	int count = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] != MAX)
		{
			count += arr[i];
		}
	}
	printf("%d", count);
	return 0;
}