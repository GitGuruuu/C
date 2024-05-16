#include "game.h"
void InitBoard(char board[ROWS][COLS], int row, int col, char a){
    int i = 0;
    int j = 0;
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            board[i][j] = a;
        }
    }
}
void DisplayBoard(char board[ROWS][COLS], int row, int col){
    int i = 0;
    int j = 0;
    for(i = 1; i <= row; i++){
        for(j = 1; j<=col; j++){
            printf("%c ", board[i][j]);
            if(j == col){
                printf("\n");
            }
        }
    }
}

void SetMine(char board[ROWS][COLS], int row, int col){
    int x = 0;
    int y =0;
    x = rand()%row-1;
    y = rand()%col-1;
    int count = Easy_Count;

}