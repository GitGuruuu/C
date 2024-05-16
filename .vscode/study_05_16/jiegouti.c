//描述一个学生
// struct Stu//定义一个结构体类型
// {
//     char name[20];
//     short age;
//     char tele[12];
//     char sex[5];

// }s1,s2,s3;//是三个全局的结构体变量
// typedef struct Stu//定义一个结构体类型
// {
//     char name[20];
//     short age;
//     char tele[12];
//     char sex[5];

// }Stu;//类型


// int main(){
//     Stu s1 = {"张三",20,"211300057","男"};//创建结构体变量，是临时变量

//     return 0;
// }


struct S{
    int a;
    char c;
    char arr[20];
    double d;
};
struct T{
    char ch[10];
    struct S s;
    char *pc;
};
int main(){
    struct T t = {"keke0", {100,'w',"hello",3.14}, 0};
    printf("%s\n", t.ch);
    printf("%s\n", t.s.arr);
    printf("%lf\n", t.s.d);
    printf("%s\n", t.pc);
    return 0;

}
