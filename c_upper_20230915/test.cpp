#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<iostream>
#include<ctype.h>
using namespace std;
//int main()
//{
//	//int a[4] = { 1,2,3,4 };
//	//printf("%d", sizeof(&a+1));
//	//char arr[] = { 'a','b','c','d','e','f' };
//	char arr[] = "abcdef";
///*	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr + 0));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr + 1));
//	printf("%d\n", sizeof(&arr[0] + 1));*/	
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
////	printf("%d\n", strlen(*arr));//报错，野指针
////	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <=10; i++)
//	{
//		printf("你的生命浪费了%d秒\n",i);
//		Sleep(1000);
//	}
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//4
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p=(struct Test*)0x100000;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节//x86环境
//int main()
//{
//	printf("%p\n", p );
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

////笔试题3
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//4；2000000
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式的结果是最后一个表达式的结果
//	int* p=a[0];
//	printf("%d", a[0][0]);//1
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//p[4][2]相当于*(*(p+4)+2)
//	return 0;
//}

//int main()
//{
//	/*int time = 0;
//	printf("请输入时间（单位：秒）\n");
//	scanf("%d", &time);*/
//	printf("你的电脑将在120秒后关机\n");
//	system("shutdown -s -t 120");
//	int i = 0;
//	printf("输入520，救你一命！\n");
//	scanf("%d", &i);
//	if (i == 520)
//	{
//		system("shutdown -a");
//	}
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}

//int main()//令人懵逼的题目
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	return 0;
//}
#include<assert.h>
//char* my_strcpy(char* str2, const char* str1)
//{
//	assert(str1&&str2);
//	char* ret = str2;
//	while (*str2++ = *str1++)
//		;
//	*str2 = *str1;
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while(*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	my_strcat(arr1, " world");//字符串追加
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strcmp(const char*str1,const char*str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return(*str1 - *str2);
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "abc";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//	{
//		printf(">\n");
//	}
//	else if (ret == 0)
//	{
//		printf("==\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//int main()
//{
//	//char arr1[20] = "abcdef";
//	//char arr2[] = "hello bit";
//	//strncpy(arr1, arr2, 5);
//	char arr1[10] = "hello";
//	char arr2[] = "bit";
//	strncat(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}
//
//int main()
//{
//	char str1[] = "wxk@bitejiuyeke.com";
//	char str2[] = "bitejiuyeke";
//	char* ret = strstr(str1, str2);//查找字符串，返回值类型为char*
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//char* my_strstr(const char* str1, const char* str2)//参考代码，模拟实现strstr//暂时存疑，功能不完善
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		if (*s1!='\0'&& *s2!='\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//	char str1[] = "abc";
//	char str2[] = "abc";
//	char* ret = my_strstr(str1, str2);
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	const char* sep = "@.";
//	char email[] = "wangxikang@qq.com";
//	char* ret = strtok(email, sep);
//	printf("%s\n", ret);
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//	return 0;
//}

#include<windows.h>
//int main()
//{
//	printf("您的电脑即将在2分钟后关机\n");
//	system("shutdown -s -t 120");
//	char arr[20] = { 0 };
//	again:
//	printf("输入“爸爸”即可取消关机\n");
//	gets(arr);
//	int i=strcmp(arr, "爸爸");
//	if (i == 0)
//	{
//		system("shutdown -a");
//		printf("关机已取消\n");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
#include<errno.h>
//int main()
//{
//	//printf("%s\n", strerror(0));//错误码
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//	//printf("%s\n", strerror(5));
//	//errno-C语言设置的一个全局的错误码存放的变量
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//
//	cout << "a" << endl;
//	printf("%c", tolower('S'));
//	return 0;
//}
//void* my_memcpy(void* dest, void* src, int num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[] = { 9,8,7,6,5,4,3 };
//	my_memcpy(arr1, arr2, sizeof(arr1));
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

#include <stdio.h>  

//#include<iostream>
//using namespace std;
//int main() 
//{
//    cout << "F E";
//    return 0;
//}

//#include <stdio.h>  
//
//int main()
//{
//	int route;
//	scanf("%d", &route);
//	int tb = 27 + route / 3+23;
//	int tw = route / 1.2;
//	if (tb > tw)
//	{
//		printf("Walk");
//	}
//	else if (tb == tw)
//	{
//		printf("All");
//	}
//	else
//	{
//		printf("Bike");
//	}
//	return 0;
//}

//#include <stdio.h>  
//
//int main() {
//    // 定义一些常量  
//    const double WALK_SPEED = 1.2; // 步行速度，单位：米/秒  
//    const double BIKE_SPEED = 3.0; // 骑车速度，单位：米/秒  
//    const double BIKE_TIME = 27.0; // 骑车固定时间，单位：秒  
//    const double LOCK_TIME = 23.0; // 锁车固定时间，单位：秒  
//
//    // 输入要行走的距离  
//    double distance;
//    //printf("请输入一次办事要行走的距离（单位：米）：");
//    scanf("%lf", &distance);
//
//    // 计算骑车和走路所需的时间  
//    double bike_time = distance / BIKE_SPEED + BIKE_TIME + LOCK_TIME;
//    double walk_time = distance / WALK_SPEED;
//
//    // 判断并输出结果  
//    if (bike_time < walk_time) {
//        printf("Bike\n");
//    }
//    else if (bike_time > walk_time) {
//        printf("Walk\n");
//    }
//    else {
//        printf("All\n");
//    }
//
//    return 0;
//}

//#include <stdio.h>  
//int main()
//{
//	int arr[3];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 0; i < 2; i++)
//	{
//		if (arr[i] < arr[i + 1])
//		{
//			max = arr[i + 1];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//#include <stdio.h>  
//int main()
//{
//	printf("Hello, world!");
//	return 0;
//}

#include <stdio.h>
//#include <string.h>  
//
//int main() {
//    char a[1000], b[1000]; // 定义字符串变量  
//    int len_a, len_b, i, j, carry; // len_a和len_b表示a和b的长度，i和j表示循环计数器，carry表示进位  
//
//    // 读入a和b的字符串形式，并求出它们的长度  
//    scanf("%s", a);
//    scanf("%s", b);
//    len_a = strlen(a);
//    len_b = strlen(b);
//
//    // 从低位到高位逐位相加，并处理进位  
//    for (i = 0, j = 0; i < len_a || j < len_b; i++, j++) {
//        int sum = 0;
//        if (i < len_a) {
//            sum += a[len_a - 1 - i] - '0';
//        }
//        if (j < len_b) {
//            sum += b[len_b - 1 - j] - '0';
//        }
//        carry = sum / 10; // 求进位  
//        printf("%d", sum % 10); // 输出本位的值  
//        if (carry > 0) { // 如果进位大于0，需要输出进位  
//            printf("%d", carry);
//        }
//    }
//    printf("\n");
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int M, N, X,power;//M 体力最大值 N战斗力 X能量元素 power体力值
//	scanf("%d %d %d", &M, &N, &X);
//
//	return 0;
//}

//#include <stdio.h>  
//
//int MAX(int a, int b) 
//{
//    return a > b ? a : b;
//}
//
//int main() {
//    int M, N, X;
//    scanf("%d %d %d", &M, &N, &X);
//
//    int max_force = N; // 初始战斗力  
//    int rest_days = M; // 剩余天数  
//    int rest_energy = X; // 剩余能量元素  
//
//    while (rest_days > 0 && rest_energy > 0) {
//        // 计算当前战斗期内的战斗任务数量  
//        int tasks = MAX(1, (rest_days - 1) / N) + 1;
//        // 计算当前战斗期需要的能量元素数量  
//        int needed_energy = MAX(1, (M - tasks + 1) / N) * N;
//        // 如果当前剩余能量元素足够，则参加战斗，更新剩余天数和剩余能量元素数量  
//        if (needed_energy <= rest_energy) {
//            rest_days -= tasks;
//            rest_energy -= needed_energy;
//            // 更新最大战斗力  
//            max_force = MAX(max_force, N + (tasks - 1) / N);
//        }
//        else {
//            // 如果当前剩余能量元素不足，则不参加战斗，直接退出循环  
//            break;
//        }
//    }
//
//    printf("%d\n", max_force);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int M, N, X;
//    scanf("%d %d %d", &M, &N, &X);
//
//    int max_power = 0;
//    int power = 0;
//
//    while (X > 0) {
//        if (power == M) {
//            power = 0;
//            X--;
//        }
//
//        if (power < M) {
//            power++;
//            max_power = power > max_power ? power : max_power;
//        }
//
//        if (X > 0) {
//            int energy = power < M ? (M - power) : 0;
//            power += energy <= X ? energy : X;
//            X -= energy <= X ? energy : X;
//        }
//    }
//
//    printf("%d\n", max_power);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int M, N, X;
//    scanf("%d %d %d", &M, &N, &X);
//
//    int max_power = N;
//    int remain_energy = X;
//
//    for (int i = 0; i < M; i++) {
//        if (remain_energy <= max_power) {
//            max_power += remain_energy;
//            remain_energy = 0;
//        }
//        else {
//            max_power += max_power + 1;
//            remain_energy -= max_power;
//        }
//    }
//
//    printf("%d\n", max_power);
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[100] = { 0 };
//	int i, j;
//	scanf("%d", &i);
//	for (j = 0; j < i; j++)
//	{
//		scanf("%d", &arr[j]);
//	}
//	float ret=0.0;
//	for (j = 0; j < i; j++)
//	{
//		ret += (float)arr[j];
//	}
//	ret /= i;
//	printf("%.2f\n", ret);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	int i = 0;
//	int ret = 0;
//	int add = (n - 2) * 180;
//	for (i = 0; i < n - 1; i++)
//	{
//		scanf("%d", &arr[i]);
//		add -= arr[i];
//	}
//	printf("%d", add);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	unsigned int n = 0;
//	unsigned int arr[1001] = { 0 };
//	unsigned int MAX = 0;
//	unsigned int MIN = 0;
//	unsigned int i = 0;
//	scanf("%u", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%u", &arr[i]);
//	}
//	MAX = arr[0];
//	MIN = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i]>MAX)
//		{
//			MAX = arr[i];
//		}
//		else if (arr[i]<MIN)
//		{
//			MIN = arr[i];
//		}
//	}
//	printf("%u", MAX - MIN);
//	return 0;
//}

//#include <stdio.h>
//int fact(int n)//实现n的阶乘
//{
//	int  res = n;
//	if (n == 0||n==1)
//	{
//		res = 1;
//	}
//	else if (n > 1)
//	{
//		res*=fact(n - 1);
//	}
//	return res;
//}
//int main()
//{
//	int n = 0, i = 0;
//	double e = 0.0;
//	double ret = 0.0;
//	scanf("%d", &n);
//	for (i = 0; i <= n; i++)
//	{
//		ret += 1.0 / fact(i);
//	}
//	printf("%.10lf", ret);
//	//double a = 0;
//	//scanf("%lf", &a);
//	//printf("%lf", fact(a));
//	return 0;
//}

//#include <stdio.h>  
//int main() 
//{
//    int n;
//    double e = 1.0, factorial = 1.0;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        factorial *= i;
//        e += 1.0 / factorial;
//    }
//    printf("%.10f", e);
//    return 0;
//}
//int get_min(int a, int b)//获取最小公倍数
//{
//	int c = a > b ? a : b;
//	while ((c % a == 0 && c % b == 0) == 0)
//	{
//		c++;
//	}
//	return c;
//}
//#include <stdio.h>  
//
//int main()
//{
//	int N = 0, NA = 0, NB = 0, i = 0, j = 0;
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	scanf("%d %d %d", &N, &NA, &NB);
//	for (i = 0; i < NA; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < NB; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//int arr3[10000] = { 0 };
//	//int arr4[10000] = { 0 };
//	//int price = 100;
//	//while (price)
//	//{
//	//	for (i = 0; i < NA; i++)
//	//	{
//	//		arr3[j] = arr1[i];
//	//	}
//	//	j += NA;
//	//	price--;
//	//}
//	//j = 0;
//	//while (price)
//	//{
//	//	for (i = 0; i < NB; i++)
//	//	{
//	//		arr4[j] = arr2[i];
//	//	}
//	//	j += NB;
//	//	price--;
//	//}
//	//int count = 0;
//	//for (i = 0; i < N; i++)
//	//{
//	//	if ((arr3[i] - arr4[i] == -2) || (arr3[i] - arr4[i] == -3) || (arr3[i] - arr4[i] == 5))
//	//	{
//	//		count++;
//	//	}
//	//	else if ((arr3[i] - arr4[i] == 2) || (arr3[i] - arr4[i] == 3) || (arr3[i] - arr4[i] == -5))
//	//	{
//	//		count--;
//	//	}
//	//}
//	//if (count > 0)
//	//	printf("A");
//	//else if (count == 0)
//	//	printf("draw");
//	//else
//	//	printf("B");
//	printf("A");
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int N, NA, NB;
//    int a[100], b[100];
//    // 读取输入数据
//    scanf("%d %d %d", &N, &NA, &NB);
//    for (int i = 0; i < NA; i++) 
//    {
//        scanf("%d", &a[i]);
//    }
//    for (int i = 0; i < NB; i++) 
//    {
//        scanf("%d", &b[i]);
//    }
//    // 模拟猜拳的过程并统计胜利轮数
//    int countA = 0, countB = 0;
//    for (int i = 0; i < N; i++) 
//    {
//        if ((a[i % NA] == 0 && b[i % NB] == 2)|| (a[i % NA] == 2 && b[i % NB] == 5)|| (a[i % NA] == 5 && b[i % NB] == 0)) //WC 直接取模？！牛逼！
//        {
//            countA++;
//        }
//        else if (a[i % NA] != b[i % NB])
//        {
//            countB++;
//        }
//    }
//    // 输出结果
//    if (countA > countB) 
//    {
//        printf("A\n");
//    }
//    else if (countA < countB)
//    {
//        printf("B\n");
//    }
//    else 
//    {
//        printf("draw\n");
//    }
//    return 0;
//}

int main()
{
	int n = 0, i = 0, j = 0;
	scanf("%d", &n);
	for (i = 1; i <=n; i++)
	{
		for (j = n - i - 1; j >= 0; j--)
		{
			printf("  ");
		}
		for (j = 0; j < i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}


