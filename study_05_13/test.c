#include "game1.h"


void menu()
{
    printf("************************\n");
    printf("****1.play   0.exit ****\n");
    printf("************************\n");
}

void game(){
    char ret = 0;
    //数组，存放走出的棋盘信息
    char board[ROW][COL] = {0};
    //初始化棋盘
    InitBoard(board, ROW, COL);
    //打印棋盘
    DisplayBoard(board, ROW, COL);
    //下棋
    while(1){
        //玩家下棋
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //判断玩家是否赢
        ret = IsWin(board, ROW, COL);
        if(ret != 'C'){
            break;
        }

        //电脑下棋
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        ret = IsWin(board, ROW, COL);
        if(ret != 'C'){
            break;
        }
    }
    if(ret == '*'){
        printf("玩家赢\n");
    }else if(ret == '#'){
        printf("电脑赢\n");
    }else{
        printf("平局\n");
    }

}


void test()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请输入:>\n");
        scanf("%d", &input);
        switch (input)
        {
        case (1):
            printf("三子棋\n");
            game();
            break;

        case (0):
            printf("退出游戏\n");
            break;

        default:
            printf("输入错误\n");
            break;
        }
    }while(input);
}

int main()
{
    test();
    return;
}