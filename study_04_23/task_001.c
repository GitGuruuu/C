//什么是计算机语言？————人和计算机交流的语言
//语言的发展：1.二进制语言  硬件——电——正电1/负电1010000101101110011011
//           2.10100001——ADD——助记符——汇编语言
//           3.B语言
//           4.C语言、C++ ——高级语言

//C语言  国际标准：ANSI C-C89/C90
//     C99/C11 并不流行，许多编译器不支持
#include <stdio.h> //包含一个叫做stdio.h的文件
//.c文件叫源文件，.h文件叫头文件


//C语言是一种结构化程序设计语言
//1.顺序结构
//2.选择结构
//3.循环结构


//分支与循环
//if语句



// int main()//主函数，程序的入口，有且只有一个
// {
//     int age = 12;
//     if(age<18)
//     {
//         printf("未成年\n");
//         printf("不能谈恋爱\n");
//     }
//     else if(age>=18 && age<28)
//         printf("青年\n");
//     else if(age>=28 && age<50)
//         printf("壮年\n");
//     else   
//         printf("老年\n");
//     return 0;
// }


// int main()
// {
//     int i = 1;
//     for(i = 1;i<=100;i++){
//         if(i%2==0){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }


// int main()
// {
//     int day = 0;
//     scanf("%d", &day); 
//     switch(day)//整形表达式
//     {
//         case 1://整形常量表达式
//             printf("星期一\n");
//             break;
//         case 2:
//             printf("星期二\n");
//             break;
//         case 3:
//             printf("星期三\n");
//             break;
//         case 4:
//             printf("星期四\n");
//             break;
//         case 5:
//            printf("星期五\n");
//            break;
//         case 6:
//             printf("星期六\n");
//             break;
//         case 7:
//             printf("星期日\n");
//             break;
//         default:
//             printf("输入错误\n");
//             break;
//     }

// }


// 循环结构


//1.while循环
// int main()
// {
//     int i = 1;

//     while(i<=10)
//     {
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }


int main()
{
    int ch = getchar();
    //putchar(ch);
    printf("%c\n", ch);
    return 0;

}