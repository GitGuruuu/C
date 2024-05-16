// int main(){
//     int a = 10;
//     int* p = &a;//指针变量
//     return 0;

// }

// int main(){
//     printf("%d\n", sizeof(char*));
//     printf("%d\n", sizeof(short*));
//     printf("%d\n", sizeof(int*));
//     printf("%d\n", sizeof(double*));
//     //指针类型决定了指针进行解引用操作时，能访问空间的大小
//     //int*p：访问四个字节
//     //char*p：访问一个字节
//     //double*p：访问八个字节

//     int a = 0x11223344;
//     int* pa = &a;
//     char* pc = &a;
//     printf("%p\n", pa);
//     printf("%p\n", pc);
//     return 0;
// }

// int main(){
//     int a = 11223344;
//     int* pa = &a;
//     char* pc = &a;
//     printf("%p\n", pa);
//     printf("%p\n", pa+1);

//     printf("%p\n", pc);
//     printf("%p\n", pc+1);
// //指针类型决定：指针走一步的步长
//     return 0;
// }

// #include <cstddef>
// int main(){
//     int arr[10] = {0};
//     //int* p = arr;//数组名——首元素的地址
//     //初始化
//     int *p = 0;
//     int i =0;
//     for(i = 0; i< 10; i++){
//         *(p + i) = 1;
//     }

// }

// int main(){
//     int arr[10] = {0};
//     printf("%p\n",arr);
//     printf("%p\n", &arr[0]);
//     //1.&arr-&数组名 取出的是整个数组的地址
//     //2.sizeof（arr）————数组名表示整个数组，计算整个数组的大小
//     return 0;
// }

// int main(){
//     int arr[10] = {0};
//     int* p = arr;//存的是数组首元素的地址
//     int i = 0;
//     for(i = 0;i <10; i++){
//         *(p+i) = i;
//         printf("%d ", *(p+i));
//     }

//     // for(i = 0; i<10;i++){
//     //     printf("%p======%p\n",p+i,&arr[i]);
//     // }
//     return 0;

// }

// 二级指针
//  int main(){
//      int a = 10;
//      int* pa = &a;
//      int** ppa = &pa;//ppa就是二级指针
//      printf("%d\n",**ppa);
//      return 0;
//  }

// int main(){
//     int a = 10;
//     int b = 20;
//     int c = 30;
//     int *pa = &a;
//     int* pb = &b;
//     int* pc = &c;
//     //整型数组 —— 存放整形
//     //字符数组 —— 存放字符
//     //指针数组 —— 存放指针
//     int* arr[3] = {&a,&b,&c};
//     int i = 0;
//     for(i = 0; i<3; i++){
//         printf("%d\n",*(arr[i]));
//     }

//     return 0;
// }

// void Init(int arr[], int sz)
// {
//     int i = 0;
//     for (i = 0; i < sz; i++)
//     {
//         arr[i] = 0;
//     }
// }
// void Print(int arr[], int sz)
// {
//     int i = 0;
//     for (i = 0; i < sz; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }
// void Reverse(int arr[], int sz)
// {
//     int left = 0;
//     int right = sz - 1;
//     while (left < right)
//     {
//         int tmp = arr[left];
//         arr[left] = arr[right];
//         arr[right] = tmp;
//         left++;
//         right--;
//     }
// }
// int main()
// {
//     int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//     int sz = sizeof(arr) / sizeof(arr[0]);

//     //Init(arr, sz);
//     Reverse(arr, sz);
//     Print(arr, sz);

//     return 0;
// }

// int main(){
//     int arr1[] = {1,3,5,7,9};
//     int arr2[] = {2,4,6,8,10};
//     int sz = sizeof(arr1)/sizeof(arr1[0]);
//     int i = 0;
//     for(i = 0; i<sz; i++){
//         int tmp = 0;
//         tmp = arr1[i];
//         arr1[i] = arr2[i];
//         arr2[i] = tmp;
//     }
//     for(i = 0;i<sz; i++){
//         printf("%d ", arr1[i]);
//     }
//     return 0;
// }

// void print(int m)
// {
//     int i = 0;
//     printf("奇数位：\n");
//     for(i = 30;i >= 0; i -=2){
//         printf("%d",(m>>i)&1);
//     }

// }
// int main(){
//     int m = 0;
//     scanf("%d", &m);
//     print(m);
//     return 0;

// }

void reverse_string(char arr[], int sz)
{
    int left = 0;
    int right = sz - 1;
    while (left < right)
    {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
}
// void reverse_string(char arr[], int sz){
//     //1.a与f的交换
//     //2.reverse_string('bcde')

// }
int main()
{
    char arr[] = "abcdef";
    int sz = sizeof(arr) - sizeof(arr[0]);
    reverse_string(arr, sz);
    printf("%s\n", arr);
    return 0;
}