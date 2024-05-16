// int main(){
//     double a = 5/(2.0);//商2余1
//     printf("a = %lf\n", a);
//     return 0;
// }

// int main(){
//     int a = 16;
//     //>> -- 右移操作符
//     //移动的是二进制位
//     //00000000000000000000000000010000
//     int b = a >> 1;
//     printf("%d\n", b);
// }

// int main(){
//     int a = 5;
//     int b = a << 1;//左移：左边丢弃，右边补零
//     printf("%d\n", b);
//     return 0;
// }

// int main(){
//     int a = 3;
//     int b = 5;
//     // int c = a&b;//与
//     // int c = a|b;//或
//     int c = a^b;//异或
//     printf("%d\n", c);
//     return 0;
// }

// int main(){
//     int a= 3;
//     int b= 5;
//     //加减法，可能会溢出
//     // a = a+b;
//     // b = a - b;
//     // a = a-b;
//     a = a^b;
//     b = a^b;
//     a = a^b;
//     printf("%d %d", a, b);
//     return 0;
// }

// int main(){
//     short s = 0;
//     int a = 10;
//     printf("%d\n", sizeof(s = a+5));//sizeof括号里面内部表达式不参与运算
//     printf("%d\n",s);
//     // int a = 0;
//     // char b = 'w';
//     // int arr[10] = {0};

//     // printf("%d\n", sizeof(a));
//     // printf("%d\n", sizeof(int));

//     // printf("%d\n", sizeof(b));
//     // printf("%d\n", sizeof(char));

//     // printf("%d\n", sizeof(arr));
//     // printf("%d\n", sizeof(int [10]));

//     return 0;
// }

// int main(){

//     // int a = 0;
//     // //~按位取反
//     // //00000000000000000000000000000000
//     // //11111111111111111111111111111111 - 补码
//     // //11111111111111111111111111111110 - 反码
//     // //10000000000000000000000000000001 - 原码

//     // printf("%d\n",~a);
//     // return 0;  


//     int a = 11;
//     a = a | (1 << 2);
//     printf("%d\n",a);
//     a = a & (~(1 << 2));
//     printf("%d\n",a);
// }

// int main(){
//     int a = 3;
//     int b = 5;
//     int c = a&&b;
//     printf("%d\n", c);
//     return 0;
// }

// int main(){
//     int i = 0, a = 0, b = 2,c =3, d= 4;
//     i = a++ &&++b &&d++;//逻辑与左边为假，右边不算
//     printf("a = %d\n b=%d\n c = %d\n d = %d\n", a,b,c,d);
//     return 0;
// }

// int main(){
//     int a = 10;
//     int b= 20;
//     //b = (a > 5 ? 3 : -3);
//     int max = 0;
//     max = (a > b ? a : b);
//     printf("%d\n", max);
// }

// int get_max(int x, int y){
//     return (x > y ? x : y);
// }

// int main(){
//     int a = 10;
//     int b = 20;
//     int max = get_max(a, b);
//     printf("max = %d\n", max);
//     return 0;
// }

// struct Stu{
//     char name[20];
//     int age;
//     char id[20];

// };

// int main(){
//     int a = 10;
//     //使用struct Stu这个类型创建了一个学生对象s1，并初始化
//     struct Stu s1 = {"张三", 20, "211300057"};
//     struct Stu* ps = &s1;
//     printf("%s\n", s1.name);
//     printf("%d\n", s1.age);
//     printf("%s\n", s1.id);

//     return 0;
// }



//在计算时产生整型提升（算术运算）
int main(){
    // char a = 3;
    // char b = 127;
    // char c = a+b;
    // printf("%d\n", c);
    int c= 1;
    // 表达式运算路径不唯一
    int x = c + --c;//问题表达式
    printf("%d\n", x);

    return 0;
}