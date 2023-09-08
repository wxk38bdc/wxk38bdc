#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
void initboard(char board[ROW][COL], int row, int col);//初始化 棋盘

void displayboard(char board[ROW][COL], int row, int col);//打印棋盘

void playermove(char board[ROW][COL], int row, int col);//玩家下棋

void computermove(char board[ROW][COL], int row, int col);//电脑下棋 找没有下棋的随机下棋

char iswin(char board[ROW][COL], int row, int col);