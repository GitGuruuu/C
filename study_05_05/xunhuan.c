//循环：for while  do......while
//for循环
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>

// int main(){
//     int i = 0;//初始化
//     while(i<10)//判断
//     {
//         ;
//         i++;//调整
//     }
//}
//在while循环中，会出现过长的代码导致上述三者的调整不方便，故需要for循环
//for（表达式1； 表达式2； 表达式3；）{}
// int main(){
//     int i = 0;
//     for(i = 1; i <= 10; i++){
//         printf("%d\n", i);

//     }
//     return 0;
// }

// int main()
// {
//     int i = 0;
//     for(i = 0; i <=10; i++)
//     {
//         if(i = 5){//循环体内改变循环变量，导致循环失控
//             printf("1");

//         }
//         printf("hehe");

//     }
//     return 0 ;

// }

// int main(){
//     int i = 0;
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     for(i = 0; i < 10; i++){//for循环建议使用前闭后开区间，这样10带有意义（十次循环等）
//         printf("%d\n", arr[i]);
//     }
//     return 0;

// }

// int main(){
//     int i = 0;
//     for(i = 0; i<10; i++){
//         int j = 0;
//         for(j = 0; j<10; j++){
//             printf("hehe\n");
//         }
//     }
//     return 0;
// }

//变种
// int main(){
//     int x, y;
//     for(x=0, y=0; x<2 && y<5; ++x, y++){
//         printf("keke\n");
//     }
//     return 0;
// }

// int main(){
//     int i = 0;
//     int k=0;
//     for(i=0, k=0; k=0; i++,k++){//注意赋值还是判断
//         printf("hehe\n");
//     }
//     return 0;
// }

//do...while循环
// int main(){
//     int i = 0;
//     do
//     {
//         printf("hehe\n");
//         i++;

//         /* code */
//     } while ( i < 10);
    
//     return 0;
// }

//计算n的阶乘
// int main(){
//     int n = 0;
//     scanf("%d", &n);
//     int ret = 1;
//     //int i = 1;
//     for(int i = 1; i <= n; i++){
//         ret = ret * i;

//     }
//     printf("%d\n", ret);
//     return 0;
//     //printf("%d\n", n);
//     return 0;

// }

// int main(){
//     int n = 0;
//     scanf("%d", &n);
//     int res = 1;
//     int i =0;
//     int sum = 0;
//     for(i = 1; i <= n; i++){
//         res = res * i;
//         sum = sum + res;
//     }
//     // for(i = 1; i <= n; i++)
//     // {
//     //     int j = 1;
//     //     int ret = 1;
//     //     for(j = 1; j <= i; j++)
//     //     {
//     //         ret = ret * j;
//     //     }
//     //     res = res + ret;
//     // }
//     //printf("%d\n", res);
//     printf("%d\n", sum);
//     return 0;
// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int k = 7;
//     int i = 0;
//     int sz = sizeof(arr)/sizeof(arr[0]);//数组总空间除以单个数组元素占用空间，从而求元素个数

//     for(i=0; i<sz; i++){
//         if(k == arr[i]){
//             printf("找到了，下标是：%d\n", i);
//             break;
//         }

//     }
//     if(i == sz){
//         printf("找不到\n");        
//     }
//     return 0;

// }

// int main(){//二分查找
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int k = 7;

//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int left = 0;//左下标
//     int right = sz - 1;//右下标
//     while(left <= right){
//         int mid = (left + right )/2;
//         if(arr[mid]>k){
//             right = mid - 1;
//         }
//         else if(arr[mid] < k)
//         {
//             left = mid + 1;
//         }
//         else{
//             printf("找到了，下标是:%d\n", mid);
//             break;
//         }
//     }
//     if(left>right){
//         printf("找不到\n");
//     }
//     return 0;
// }

// int main()
// {
//     char arr1[] = "welcome to bit!!!!!!";
//     char arr2[] = "####################";
//     int left = 0;
//     int right = strlen(arr1)-1;
//     while(left <= right){
//         arr2[left] = arr1[left];
//         arr2[right] = arr1[right];
//         printf("%s\n", arr2);
//         //休息一秒
//         Sleep(1000);
//         //system("cls");//执行系统命令的函数   清屏：cls     youwenti!!!
//         left++;
//         right--;

//     }
//     printf("%s\n", arr2);
//     return 0;
// }

// int main(){
//     int i = 0;
//     char password[20] = {0};
//     for(i = 0; i<3; i++){
//         printf("请输入密码:>");
//         scanf("%s", password);
//         if(strcmp(password, "123456") == 0)//==不能比较字符串相等
//         {
//             printf("登陆成功\n");
//             break;
//         }
//         printf("密码错误\n");

//     }
//     if(i == 3){
//         printf("三次密码均错误，退出程序\n");
//     }
//     return 0;
// }

// int main(){
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     int d = 0;
//     // scanf("%d\n", &a);
//     // scanf("%d\n", &b);
//     // scanf("%d\n", &c);
//     scanf("%d%d%d", &a,&b,&c);
//     if(a < b){
        
//         d = a;
//         a = b;
//         b = d;
//     }
//     if(a < c){
//         d = a;
//         a = c;
//         c = d;

//     }
//     if(b<c){
//         d = b;
//         b = c;
//         c = d;
//     }
    
//     printf("%d, %d, %d\n", a,b,c);

//     return 0;
// }

// int main(){
//     int i = 0;
//     for(i = 1; i<=100; i++){
//         if(i%3 == 0){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }

// int main(){
//     int m = 0;
//     int n = 0;
//     int r = 0;
//     scanf("%d%d", &m,&n);
//     while( r = m%n){
        
//         m = n;
//         n = r; 

//     }
//     printf("%d", n);
// }

// int main(){
//     int year = 0;
//     int count = 0;
//     for(year = 1000; year <= 2000; year++){
        
//         if(year%4 == 0&& year%100!=0){
//             printf("%d ",year);
//             count++;
//         }
//         else if(year%400 == 0){
//             printf("%d ", year);
//             count++;

//         }
//     }
//     printf("\ncount = %d", count);
//     return 0;
// }

// 

// int main(){
//     int i = 0;
//     int count = 0;
//     for(i = 0; i<=100; i++){
//         if(i%10==9){
//             count++;
//         }
//         if(i/10 == 9){
//             count++;
//         }
        
//     }
//     printf("count = %d\n", count);
//     return 0;
// }

// int main(){
//     int i = 0;
//     int j = 0;
//     double sum = 0;
//     for(i = 1; i<100; i+=2){
//         sum += 1.0/i;

//     }
//     for(j = 2; j<=100; j+=2){
//         sum -= 1.0/j;
//     }
//     // int flag = 1;
//     // for(i = 1; i<=100; i++){
//     //     sum += flag*(1.0/i);
//     //     flag = -flag;
//     // }
//     printf("%lf\n", sum);
//     return 0;
// }

// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int max = arr[0];//最大值,初始化有问题，最开始放零会面临全负数组错误
//     int i = 0;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     for(i = 0; i<sz; i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     printf("max = %d\n", max);
//     return 0;
// }

int main(){
    int i = 0;
    int j =1;
    for(i = 1; i <10; i++){
        
        for(j = 1; j<=i; j++){
            printf("%d*%d=%-2d", i, j, i*j);

        }
        printf("\n");
    }
    return 0;
}

