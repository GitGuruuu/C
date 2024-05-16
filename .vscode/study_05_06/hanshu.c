//函数是什么：大型程序的莫部分代码，具有独立性
#include <stdio.h>

// int ADD(int x, int y){
//     int z = 0;
//     z = x + y;
//     return z;
// }

// int main(){

//     int a = 10;
//     int b = 20;
//     int sum = ADD(a,b);
//     printf("%d\n", sum);
//     return 0;

// }
#include <string.h>
// int main(){
//     char arr1[] = "bit";
//     char arr2[] = "############";
//     strcpy(arr2, arr1);
//     printf("%s\n", arr2);
//     //strlen - string length - 字符串长度
//     //strcpy  - string copy -字符串拷贝
//     return 0;
// }


//memset
// int main(){
//     char arr[] = "hello world";
//     memset(arr, '*', 5);
//     printf("%s\n",arr);
//     return 0;
// }


// int get_max(int x, int y){
//     if(x>y){
//         return x;
//     }
//     else{
//         return y;
//     }
// }
// int main(){
//     int a = 10;
//     int b = 20;
//     int max = get_max(a, b);
//     printf("max = %d\n", max);
//     return 0;

// }
// void swap1(int x, int y){
//     int tmp = 0;
//     tmp = x;
//     x = y;
//     y = tmp;
// }
// swap2(int* pa, int* pb){
//     int tmp = 0;
//     tmp = *pa;
//     *pa = *pb;
//     *pb = tmp;
// }
// int main(){
//     int a = 0;
//     int b = 20;
//     //swap1(a,b);//并未改变a，b的值
//     swap2(&a, &b);
//     printf("a = %d  b = %d", a, b);
//     // int tmp = 0;
//     // tmp = a;
//     // a = b;
//     // b = tmp;
//     // printf("%d", a);
//     return 0;
// }


// int test(int x){
//     int i = 0;
//     for(i = 2; i < sqrt(x); i++){
//         if(x % i == 0){
//             return 0;
//         }
//     }
//     if(i >= sqrt(x)){
//         return 1;
//     }
// }

// int main(){
//     int a = 0;
//     scanf("%d", &a);
//     int b = test(a);
//     if(b == 1){
//         printf("是素数\n");
//     }
//     else{
//         printf("不是素数\n");
//     }
//     //printf("%d", a);
//     return 0;

// }



// int is_leap_year(int y){
//     if((y%4==0&&y%100!=0)||(y%400 == 0)){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     int year = 0;
//     for(year = 1000; year <= 2000; year ++){
//         if(is_leap_year(year)){
//             printf("%d ", year);
//         }


//     }
//     return 0;
// }



//                    传递过去的是数组首元素地址，本质上是指针
// int binary_search(int arr[], int k, int sz){
//     int mid = 0;
//     int left = 0;
//     //int sz = sizeof(arr)/sizeof(arr[0]);
//     int right = sz-1;
//     while(left <= right){
//         mid = (left+right)/2;
//         if(arr[mid]<k){
//             left = mid+1;
//         }
//         else if(arr[mid]>k){
//             right = mid - 1;
//         }
//         else{
//             return mid;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int k = 7;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int ret = binary_search(arr, k, sz);
//     if(ret == -1){
//         printf("找不到\n");

//     }
//     else{
//         printf("找到了，下标是：%d\n", ret);
//     }

//     return 0;
// }
// void Add(int* p){
//     (*p)++;
// }
// int main(){
//     int num = 0;
//     Add(&num);
//     printf("num = %d\n", num);
//     Add(&num);
//     printf("num = %d\n", num);
//     Add(&num);
//     printf("num = %d\n", num);
//     return 0;

// }

int main()
{
    printf("%d", printf("%d", printf("%d", 43)));//输出4321  ！
    return 0;
}