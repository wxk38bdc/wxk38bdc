
#include<iostream>//i-o-stream 输入输出流
#include<stdio.h>
#include<cmath>
using namespace std;

//int main()
//{
//	int a = 0, b = 0;
//	char ch;
//	again:
//	cin >> a >> b >> ch;
//	if (ch == '+')
//	{
//		cout << a + b << endl;
//	}
//	else if (ch == '-')
//	{
//		cout << a - b << endl;
//	}
//	else if (ch == '*')
//	{
//		cout << a * b << endl;
//	}
//	else if (ch == '/')
//	{
//		if (b == 0)
//		{
//			cout << "输入错误，除数不能为0"<<endl;
//			cout << "请重新输入：";
//			goto again;
//		}
//		else
//		{
//			cout << a / b << endl;
//		}
//	}
//	else if (ch == '%')
//	{
//		cout << a % b << endl;
//	}
//	else
//	{
//		cout << "输入错误" << endl;
//		cout << "请重新输入：";
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	int n, sum = 0;
//	cin >> n;
//	//cout << (n * (n + 1)) / 2 << endl;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	cout << sum;
//	return 0;
//}

//int main()
//{
//	int a, n;
//	cin >> a >> n;
//	cout << pow(a, n);
//	return 0;
//}

int bubble_sort(int arr[], int len)
{
	int temp;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}

		}
	}
	return 0;
}
int main()
{
	int arr[100];
	int len=0;
	//输入数组
	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &arr[i]);
	}
	while (cin >> arr[len])
	{
		len++;
	}
	bubble_sort(arr, len);
	return 0;
}