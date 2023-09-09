#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//    int arr[5] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);//%x是16进制打印
//	return 0;
//}

//void reverse(char *a, char *b)
//{
//	char *c = &b;
//	*b = *a;
//	*a = *c;
//}
//int main()
//{
//	char arr[100] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);
//	int left = 0;
//	int right = strlen(arr)-1;
//	while (left <right)
//	{
//		//reverse(&arr[left], &arr[right]);
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//	return 0;
//}
#include<math.h>
//“水仙花数”指一个n位数，其各位数字的n次方之和恰好等于其本身
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//计算i是几位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//得到i的每一位并计算其n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	int left = 6;
//	int right = 6;
//	char arr[13] = "      *      ";
//	for (i = 0; i < 7; i++)
//	{
//		
//		for (j = 0; j < 13; j++)
//		{
//			printf("%c", arr[j]);
//		}
//		printf("\n");
//		if (left >0 && right < 13)
//		{
//			left--;
//			right++;
//			arr[left] = '*';
//			arr[right] = '*';
//		}
//	}
//	for (i = 0; i < 6; i++)
//	{
//		if (left<right)
//		{
//			arr[left] = ' ';
//			arr[right] = ' ';
//			left++;
//			right--;
//		}
//		for (j = 0; j < 13; j++)
//		{
//			printf("%c", arr[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，20元可以获得多少汽水

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//计算for循环的执行次数
//int main()
//{
//	int count = 0;
//	int x = 0; int y = 0;
//	for (x = 0, y = 0; (y = 123) && (x < 4); x++)
//	{
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//最小公倍数lcm,最大公约数gcd
//利用“更相减损术”求最大公约数
//int com_gcd(int a, int b);
//{
//	while((a!=c)&&(b!=c))
//	{
//		int c = (a > b) ? (a - b) : (b - a);
//		if (a > b)
//		{
//			a = c;
//		}
//		else
//		{
//			b = c;
//		}
//	}
//	return(a == c) ? a : b;
//}
//利用一般方法求最大公约数
//int com_gcd(int a, int b);
//{
//	
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = (a > b) ? b : a;
//	while (a % c != 0 || b % c != 0)
//	{
//		c--;
//	}
//	
//	//int gcd=com_gcd(a, b);
//	printf("%d\n", a*b/c);
//	return 0;
//}

#include<string.h>
//倒置字符串问题：将一句话的单词进行倒置，标点不倒置
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[101] = { 0 };
	//input
	gets(arr);
	//reverse
	int len = strlen(arr);
	//1.all
	reverse(arr, arr + len - 1);
	//2.each word
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' '&&*end!='\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end != '\0')
		{
			end++;
		}
		start = end;
	}
	//output
	printf("%s\n", arr);
	return 0;
}