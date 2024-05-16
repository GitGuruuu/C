#include "game.h"

// ‘C’  ‘Q’ ‘*’ ‘#’
int IsWin(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (int i = 0; i < row; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
        {
            return board[i][0];
        }
    }
    for (int j = 0; j < col; j++)
    {
        if (board[0][j] == board[1][j] && board[0][j] == board[2][j] && board[0][j] != ' ')
        {
            return board[0][j];
        }
    }
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
    {
        return board[1][1];
    }
    if (board[2][0] == board[1][1] && board[2][0] == board[0][2] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (board[i][j] == ' ')
            {
                return 'C';
            }
        }
    }
    return 'Q';
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;

    while (1)
    {
        i = rand() % row;
        j = rand() % col;
        if (board[i][j] == ' ')
        {
            board[i][j] = '#';
            break;
        }
    }
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    while (1)
    {
        printf("请选择位置 \n");
        scanf("%d%d", &x, &y);
        if (x >= 1 && x <= 3 && y >= 1 && y <= 3 && board[x - 1][y - 1] == ' ')
        {
            board[x - 1][y - 1] = '*';
            break;
        }
        else
        {
            printf("输入错误，请重新输入\n");
        }
    }
}

void InitBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        int j = 0;
        for (j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row - 1; i++)
    {
        int j = 0;
        for (j = 0; j < col - 1; j++)
        {
            printf(" %c |", board[i][j]);
        }
        printf(" %c ", board[i][j]);
        printf("\n");
        for (j = 0; j < col - 1; j++)
        {
            printf("---|");
        }
        printf("---");
        printf("\n");
    }
    int j = 0;
    for (j = 0; j < col - 1; j++)
    {
        printf(" %c |", board[i][j]);
    }
    printf(" %c ", board[i][j]);
    printf("\n");
}