//while 语句
#include <stdio.h>

// int main(){
//     // int ch = 0;
//     // while(ch = getchar() != EOF){
//     //     putchar(ch);
//     // }
//     int ret = 0;
//     int ch = 0;
//     // int a = 0;
//     char password[20] = {0};
//     printf("请输入密码");
//     scanf("%s", password);//输入密码，并存放在password数组中
//     //缓冲区还有一个\n
//     printf("请确认（Y/N）:>");
//     // a = getchar();//读取一下
//     while((ch = getchar()) != '\n'){
//         ;
//     }
//     ret = getchar();//Y/N
//     if(ret == 'Y'){
//         printf("确认成功\n");
//     }
//     else{
//         printf("确认失败\n");
//     }
//     return 0;
// } 

int main(){

    int ch=0;
    while((ch = getchar()) != EOF)
    {
        if(ch<'0'|| ch>'9'){
            continue;
        putchar(ch);
        }

    }


    return 0;
}



