#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<time.h>
#include"game.h"
void menu()
{
	printf("*******************************\n");
	printf("*******    1.begin   **********\n");
	printf("*******    0.exit    **********\n");
	printf("*******************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//布置好的雷
	char show[ROWS][COLS] = { 0 };//存放查出雷的信息
	InitBoard(mine, ROWS,COLS,'0');
	InitBoard(show, ROWS,COLS,'*');

	//DisplayBoard(mine, ROW, COL);//实际不显示
	//设置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(show, ROW,COL);
	//排查雷
	FindMine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case(0):
			printf("退出游戏\n");
			break;
		case(1):
			printf("开始游戏\n");
			game();
			break;
		default:
			printf("输入错误，请重试\n");
			break;
		}
	} while (input);

	return 0;
}