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

#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{

	return 0;
}