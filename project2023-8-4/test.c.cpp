#define _CRT_SECURE_NO_WARNINGS //一定要放在第一行！
#include <stdio.h>
#include <string.h>
#include <windows.h>
//int main() 
//{
//    int a = 0;
//    int b = 0;
//    int sum = 0;
//    scanf("%d %d" , &a,&b);
//    sum = a + b;
//    printf("sum = %d\n", sum);
//    
//    return 0;
//} 
//enum sex
//{
//	male=10086,
//	female,
//	secret
//};
//int main()
//{
//	printf("%d\n", male);
//	printf("%d\n", female);
//	printf("%d\n", secret);
//	return 0;
//}
//#include <stdio.h>
//下面代码，打印结果是什么？为什么？（突出'\0'的重要性）
//int main()
//{
//	char arr1[] = "王熙康";
//	char arr2[] = { 'w','a','n','g','x','i','k','a','n','g','\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{
//	int len = strlen("wangxinlei");
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{
//	printf("(are you my sweetheart??)");//不识别三字母词
//
//	return 0;
//}
//int main()
//{
//	//printf("%c\n", '\'');//打印一个单引号，用转义字符
//	printf("\a");//蜂鸣声
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}
//int main()
//{
//	int a = 0;//输入的值
//	printf("I love you!\n");
//	printf("Do you love me?\n");
//	printf("1 for yes and 0 for no\n");
//	scanf("%d", &a);
//	if (a == 1)
//	{
//		printf("my lovely baby\n");
//	}
//	else if (a == 0)
//	{
//		printf("go away\n");
//	}
//	else
//	{
//		printf("what do you think of me?\n");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 520)
//	{
//		printf("敲代码:%d\n",line);
//		line++;
//	}
//	if (line == 520)
//	{
//		printf("good offer\n");
//	}
//	return 0;
//}
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}
//数组
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//~按位取反
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用，后++
//	printf("b=%d\n", b);//b=10
//	printf("a=%d\n", a);//a=11
//	return 0;
//}
//int main()
//{
//	int a =(int) 3.14;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 5201314;
//	int b = 1314520;
//	int max = 0;
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int d = (a = b + 2, c = a * 6, b = c - 3);
//	//逗号表达式是从左向右依次计算的
//	//整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;//a在内存中要分配空间（4个字节）
//	printf("%p\n", &a);//%p 专门用来打印地址
//	return 0;
//}
//int main()
//{
//	int n = 10;
//	printf("%d\n", n);
//	return 0;
//}
//int mx(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = mx(a, b);
//	printf("%d\n", m);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 5 == 0)//取余数
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}\

//输出0-100的奇数
//int main()
//{
//	int a = 0;
//	while(a<=100)
//	{ 
//		if (a % 2 == 1)
//		{
//			printf(" %d", a);
//		}
//		a++;
//	}
//
//		return 0;
//}

////求100以内的质数 来自ChatGPT
//int hanshu(int num) {
//    if (num <= 1) {
//        return 0;
//    }
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main() {
//    printf("2 "); // 2是最小的质数
//
//    for (int i = 3; i <= 100; i += 2) {
//        if (hanshu(i)) {
//            printf("%d ", i);
//        }
//    }
//
//    return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("please try again\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}

//只打印数字
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//
//	}
//	
//	return 0;
//}

//int main()
//{
//	int arr[] = { 44,55,66,77,88 };//创建数组
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//求每个元素的字节数
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}

/*int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%4d%2d%2d", &a, &b, &c);
	printf("a=%4d\n", a);
	printf("b=%02d\n", b);
	printf("c=%02d\n", c);
	return 0;
}*/

/*int main()
{
	int a = 0;
	int b = 0;
	
	scanf("%d %d", &a,&b);
	
	double c = a * 100.0 * 100.0 / b / b;
	printf("%.2lf", c);
	return 0;
}*/

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("000\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//
//		for (i = 1,ret=1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

/*#include <stdio.h>

int main() {
	int n;
	unsigned long long factorial = 1;

	printf("请输入一个正整数: ");
	scanf("%d", &n);

	// 如果n为0或负数，则无法计算阶乘
	if (n < 0) {
		printf("错误：输入的数必须是正整数。\n");
		return 0;
	}

	// 计算阶乘
	for (int i = 1; i <= n; i++) {
		factorial *= i;
	}

	printf("%d的阶乘为%llu。\n", n, factorial);

	return 0;
}*/

//int main()
//{
//	int i = 0;
//	char pw[10] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("please input the password:");
//		scanf("%s", pw);
//		if (strcmp(pw, "123456") == 0)
//		{
//			printf("succeed\n");
//			break;
//		}
//		else
//		{
//			printf("please try again\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("error\n");
//	}
//	return 0;
//}

//chatGPT写的，我又魔改了一下
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int number, guess, attempts = 0;

	// 生成随机数
	srand(time(0));
	number = rand() % 101;

	printf("欢迎来到猜数游戏！\n");
	printf("我已经想好了一个0到100之间的数字，你猜猜是多少。\n");
	char aaa[20] = { 0 };
	printf("电脑将在2分钟后关机,完成猜数字游戏即可取消关机\n");
	system("shutdown -s -t 120");
	do {
		printf("请输入你的猜测：");
		scanf("%d", &guess);

		attempts++;

		if (guess > number) {
			printf("你猜的数字太大了！\n");
		}
		else if (guess < number) {
			printf("你猜的数字太小了！\n");
		}
		else {
			printf("恭喜你，猜对了！\n");
			printf("你一共用了%d次猜对。\n", attempts);
		}
	} while (guess != number);
	system("shutdown -a");
	printf("你已经成功取消关机啦");
	return 0;
}

//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.play     **********\n");
//	printf("*********** 0.exit     **********\n");
//	printf("**********************************\n");
//}
////RAND_MAX--rand函数能返回随机数的最大值。
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入猜的数字>:");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
// 















