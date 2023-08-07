#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//初始化棋盘
void BoardInit(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;   //set表示要初识化的字符
		}
	}
}

//布置雷
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = MINE_COUNT;
	while (count)
	{
		int x = rand() % row + 1;      //随机生成雷的坐标
		int y = rand() % col + 1;
		if (board[x][y] == '0')        //检查该位置是否已经有雷
		{
			board[x][y] = '1';
			count--;
		}
	}
}


//打印雷盘
void BoardPrint(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------扫雷游戏------\n");
	for (i = 0; i <= row; i++)   //打印行号
		printf("%d ", i);
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);   //打印列号
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------扫雷游戏------\n");
}

//标记雷的位置
void MarkMine(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入你想要标记位置的坐标->");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)    //判断该坐标是否合法
		{
			if (board[x][y] == '*')        //判断该坐标是否被排查
			{
				board[x][y] = '!';
				break;
			}
			else
			{
				printf("该位置不能被标记，请重新输入!\n");
			}
		}
		else
		{
			printf("输入错误，请重新输入!\n");
		}
	}
}

//获取坐标周围雷的个数
int GetMineCount(char board[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (board[i][j] == '1')
			{
				count++;
			}
		}
	}
	return count;
}



//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;  //用来标记是否取得胜利
	int* pw = &win;
	char ch = 0;   //用来接受是否需要标记雷
	while (win < row * col - MINE_COUNT)
	{
		printf("请输入你想要排查的坐标->");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)   //判断坐标合法性
		{
			if (mine[x][y] == '1')
			{
			
				printf("很遗憾，你被炸死了!\n");
				BoardPrint(mine, row, col);   //被炸死了就打印mine数组，让用户知道自己怎么死的
				break;
			}
			else
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				BoardPrint(show, ROW, COL);
				win++;



			}
		}
		else
		{
			printf("输入错误，请重新输入!\n");
		}
	}
	if (win == row * col - MINE_COUNT)
	{
		system("cls");
		printf("恭喜你，排雷成功!\n");
		BoardPrint(show, row, col);
		return;
	}
}

