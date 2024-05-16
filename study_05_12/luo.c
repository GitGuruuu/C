#include "game.h"
#include <stdio.h>

void game(){
    int ret = 0;
    char board[ROW][COL] = {0};
    InitBoard(board, ROW, COL);// 初始化棋盘

    DisplayBoard(board, ROW, COL);//画出棋盘

    while(1){
        PlayerMove(board, ROW, COL);//玩家移动
        DisplayBoard(board, ROW, COL);//画出棋盘
        ret = IsWin(board, ROW, COL);//判断是否结束
        if(ret != 'C'){
            break;
        }
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        ret = IsWin(board, ROW, COL);
        if(ret != 'C'){
            break;
        }
    }
    if(ret == '*'){
        printf("玩家胜利！\n");
    }
    else if(ret == '#'){
        printf("电脑胜利\n");
    }
    else{
        printf("平局\n");
    }
}




void menu()
{
    printf("**********************\n");
    printf("**1.play   0.exit*****\n");
    printf("**********************\n");
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
        switch(input){
            case(1):
                game();
                //printf("三子棋\n");
                break;
            case(0):
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
    return 0;
}