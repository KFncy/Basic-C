#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define MINE_COUNT 10

//初始化棋盘
void BoardInit(char board[ROWS][COLS], int rows, int cols, char set);
//布置雷
void SetMine(char board[ROWS][COLS], int row, int col);
//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//打印雷盘
void BoardPrint(char board[ROWS][COLS], int row, int col);





