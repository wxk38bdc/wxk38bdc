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
void* my_memcpy(void* dest, void* src, int num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[] = { 9,8,7,6,5,4,3 };
	my_memcpy(arr1, arr2, sizeof(arr1));
	int i = 0;
	for (i = 0; i < 7; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}