// //猜数字游戏
// //1. 电脑会生成一个随机数
// //2. 猜数字
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
// void menu()
// {
//     printf("******************************\n");
//     printf("***    1.play   0.exit   *****\n");
//     printf("******************************\n");
// }

// void game()
// {
//     int ret = 0;
//     int guess = 0;
//     //时间戳：当前计算机时间，减去计算机的起始时间（1970.1.1.0：0：0）

//     ret = rand() % 100 + 1;//shengcheng1-100
//     //printf("%d", ret);
//     while(1){
//         printf("猜数字:>");
//         scanf("%d", &guess);
//         if(guess>ret){
//             printf("猜大了\n");
//         }
//         else if(guess < ret){
//             printf("猜小了\n");
//         }
//         else{
//             printf("恭喜你，猜对了\n");
//             break;
//         }

//     }
    


// }
// int main()
// {
//     int input = 0;
//     srand((unsigned int)time(NULL));
//     do
//     {
//         menu();
//         printf("请选择>:");
//         scanf("%d", &input);
//         switch(input)
//         {
//             case 1:
//                 game();//猜数字
//                 break;
//             case 0:
//                 printf("推出游戏\n");
//                 break;
//             default:
//                 printf("选择错误\n");
//                 break;
//         }
//     } while (input);
    
//     return 0;
// }

int main(){
    //shutdown -s -t 600
    char input[10] = {0};
    system("shutdown -s -t 600");
again:
    printf("想取消  需输入我是猪\n");
    scanf("%s", input);
    if(strcmp(input,"我是猪") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        system("shutdown -a");
        goto again;
    }
    return 0;
}