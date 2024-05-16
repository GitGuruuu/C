#include "game.h"
void menu(){
    printf("***************\n");
    printf("****1. play****\n");
    printf("****0. exit****\n");
    printf("***************\n");
}
void game(){
    char mine[ROWS][COLS] = {0};
    char show[ROWS][COLS] = {0};
    InitBoard(mine, ROWS, COLS, '0');
    DisplayBoard(mine, ROW, COL);//打印初始化雷数组
    InitBoard(show, ROWS, COLS, '*');
    DisplayBoard(show, ROW, COL);//打印展示数组的初始化

    //生成雷
    SetMine(mine, ROW, COL);

}

void test(){
    int input = 0;
    do{
        menu();
        printf("请输入:>");
        scanf("%d", &input);
        switch(input){
            case 1:
                printf("扫雷\n");
                game();
                break;
                
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("输入错误，请重新输入\n");
                break;
        }



    }while(input);
    
}

int main(){
    test();
    return 0;
}