//相同类型元素的集合
// int main(){
//     int arr[10] = {1,2,3};// 不完全初始化,剩下元素默认是0
//     char arr2[5] = {'a', 'b'};
//     char arr3[5] = "ab";//OK
//     char arr4[] = "abcdef";
//     printf("%d\n", sizeof(arr4));//计算arr4所占空间大小
//     printf("%d\n", strlen(arr4));//求字符段长度
//     return 0;
//     //1. strlen 和 sizeof没啥关联
//     //2.strlen 是求字符串长度的('\0'之前）——只能针对字符串求长度——库函数——得引用头函数
//     //3.sizeof 求数组所占空间  操作符

// }

// int main(){
//     char arr1[] = "abc";
//     char arr2[] = {'a', 'b', 'c'};
//     printf("%d\n", sizeof(arr1));//4
//     printf("%d\n", sizeof(arr2));//3
//     printf("%d\n", strlen(arr1));//3
//     printf("%d\n", strlen(arr2));//随机值
// }

// int main(){
//     char arr[] = "abcdef";
//     int i =0;
//     for(i = 0; i<(int)strlen(arr); i++){
//         printf("%c\n", arr[i]);
//     }
//     return 0;
// }

// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int i = 0;
//     for(i =0; i<sz; i++){
//         printf("&arr[%d] = %p\n", i , &arr[i]);//数组在内存中连续存放
//     }
//     return 0;

// }

// int main(){
//     int arr[3][4] = {{1,2,3},{4,5}};//不完全初始化，剩余为零
//     char ch[5][6];//行可省略，列不可省略
//     int i =0;
//     for(i = 0;i < 3;i++){
//         int j = 0;
//         for(j  =0; j < 4; j++){
//             printf("arr[%d][%d] = %p\n ",i, j, &arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// // //冒泡排序
// void bubble_sort(int arr[], int sz){
//     int i = 0;
//     //int sz = sizeof(*arr)/sizeof(arr[0]);
//     for(i = 0; i <sz-1; i++){
//         int flag =1;//假设这一趟排序已经有序
//         int j = 0;
//         for(j = 0; j<sz-1-i; j++){
//             if(arr[j]>arr[j+1]){
//                 int tmp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = tmp;
//                 flag = 0;//本堂排序的数据其实不完全有序

//             }
//         }
//         if(flag){
//             break;
//         }
//     }
// }
// int main()
// {
//     int arr[] = {9,8,7,6,5,4,3,2,1};
    
//     int i = 0;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     bubble_sort(arr, sz);
//     for(i = 0; i<sz; i++){
//         printf("%d ", arr[i]);
//     } 
//     return 0;
// }


//1.sizeof（数组名）
//2.&数组名
//除此之外所有数组名代表数组首元素地址
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    printf("%p\n", arr);
    printf("%p\n", arr+1);//数组首元素地址
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[0]+1);
    //printf("%p\n", &arr[1]);
    printf("%p\n", &arr);
    printf("%p\n", &arr+1);//数组的地址
    return 0;
}