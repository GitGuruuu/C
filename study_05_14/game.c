#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            board[i][j] = set;
        }
    }
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
    int i = 0;
    int j = 0;
    // 打印列号
    for (i = 0; i <= col; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    for (i = 1; i <= row; i++)
    {
        printf("%d ", i);
        for (j = 1; j <= col; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
    int count = EASY_COUNT;
    while (count)
    {
        int x = rand() % row + 1;
        int y = rand() % col + 1;
        if (board[x][y] == '0')
        {
            board[x][y] = '1';
            count--;
        }
    }
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
    return mine[x - 1][y] +
           mine[x - 1][y - 1] +
           mine[x - 1][y + 1] +
           mine[x][y - 1] +
           mine[x][y + 1] +
           mine[x + 1][y - 1] +
           mine[x + 1][y + 1] +
           mine[x + 1][y] -
           8 * '0';
}



void ExpandBoard(char mine[ROWS][COLS], char show[ROWS][COLS],int x, int y,int *win)
{
	int count = get_mine_count(mine, x, y);
	if (count == 0)
	{
		show[x][y] = ' ';//没有雷的坐标赋值为空格
		(*win)++;
		//递归周围的八个格子
		if (show[x - 1][y - 1] == '*' && x - 1 > 0 && x - 1 < ROWS-1 && y - 1 > 0 && y - 1 < COLS-1)
			ExpandBoard(mine, show, x - 1, y - 1,win);
		if (show[x - 1][y] == '*' && x - 1 > 0 && x - 1 < ROWS-1 && y > 0 && y < COLS-1)
			ExpandBoard(mine, show, x - 1, y,win);
		if (show[x - 1][y + 1] == '*' && x - 1 > 0 && x - 1 < ROWS-1 && y + 1 > 0 && y + 1 < COLS-1)
			ExpandBoard(mine, show, x - 1, y + 1,win);
		if (show[x][y - 1] == '*' && x > 0 && x < ROWS-1 && y - 1 > 0 && y - 1 < COLS-1)
			ExpandBoard(mine, show, x, y - 1,win);
		if (show[x][y + 1] == '*' && x > 0 && x < ROWS-1 && y + 1 > 0 && y + 1 < COLS-1)
			ExpandBoard(mine, show, x, y + 1,win);
		if (show[x + 1][y - 1] == '*' && x + 1 > 0 && x + 1 < ROWS-1 && y - 1 > 0 && y - 1 < COLS-1)
			ExpandBoard(mine, show, x + 1, y - 1,win);
		if (show[x + 1][y] == '*' && x + 1 > 0 && x + 1 < ROWS-1 && y > 0 && y < COLS-1)
			ExpandBoard(mine, show, x + 1, y,win);
		if (show[x + 1][y + 1] == '*' && x + 1 > 0 && x + 1 < ROWS-1 && y + 1 > 0 && y + 1 < COLS-1)
			ExpandBoard(mine, show, x + 1, y + 1,win);
 
	}
	else
	{
		show[x][y] = count + '0';
        (*win)++;
	}
}





void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
    int x = 0;
    int y = 0;
    int win = 0;
    while (win < row * col - EASY_COUNT)
    {
        printf("请输入扫雷的坐标\n");
        printf("%d\n",win);
        scanf("%d%d", &x, &y);
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            // 坐标合法
            if (mine[x][y] == '1')
            {
                printf("很遗憾，你被炸死了\n");
                DisplayBoard(mine, ROW, COL);
                break;
            }
            else
            { // 不是雷
                // 计算周围几个雷
                // int count = get_mine_count(mine, x, y);
                // show[x][y] = count + '0';
                // gui(show, mine, x, y); // 递归实现扫开一片
                // win++;
                ExpandBoard( mine, show, x,  y, &win);
                DisplayBoard(show, ROW, COL);
            }
        }
        else
        {
            printf("输入坐标非法，请重新输入\n");
        }
    }
    if (win == row * col - EASY_COUNT)
    {
        printf("恭喜你，排雷成功\n");
        
        DisplayBoard(mine, ROW, COL);
    }
}