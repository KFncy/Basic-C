#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*****************************************\n");
	printf("*********  1.play      0.exit   *********\n");
	printf("*****************************************\n");
}

void game()
{
	//定义用于存放雷和显示雷的数组
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//初始化棋盘
	BoardInit(mine, ROWS, COLS, '0');
	BoardInit(show, ROWS, COLS, '*');
	//布置雷
	SetMine(mine, ROW, COL);
	//打印雷盘
	BoardPrint(show, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	//设置随机数的种子
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//菜单
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("输入错误，请重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}
