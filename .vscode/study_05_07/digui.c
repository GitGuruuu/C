// int main(){
//     printf("hi");
// }

// void print(int a){
//     int b = 0;
//     int c = 0;
//     if(a/10 != 0){
//         b= a/10;
//         c= a%10;
//         print(b);
//         printf("%d ",c );

//     }else{
//         printf("%d ",a);
//     }

// }
// int main(){
//     unsigned int num = 0;
//     scanf("%d", &num);
//     print(num);
//     return 0;
// }

// int main(){
//     char arr[] = "bit";
//     int len = strlen(arr);
//     printf("%d\n", len);
//     return 0;
// }

// int my_strlen(char *str)
// {
//     if (*str != '\0')
//     {

//         str++;
//         return 1 + my_strlen(str);
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {

//     char arr[] = "biiiiiiiiiiit";
//     int len = my_strlen(arr);
//     printf("%d\n", len);
//     return 0;
// }

// int Fac(int x){
//     if(x>1){
//         return x*Fac(x-1);
//     }
//     else{
//         return 1;
//     }
// }
// int main(){
//     int n = 0;
//     scanf("%d", &n);
//     int c = Fac(n);
//     printf("%d", c);
//     return 0;
// }

// int fib(int x){
//     if(x<=2){
//         return 1;
//     }
//     else{
//         return fib(x-1) +fib(x-2);
//     }
// }//效率低
// int fib(int n)
// {
//     int a = 1;
//     int b = 1;
//     int c = 1;
//     while (n > 2)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//         n--;
//     }
//     return c;
// }
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int c = fib(n);
//     printf("%d", c);

//     return 0;
// }

// int han(int n)
// {

//     if (n == 1)
//     {

//         return 1;
//     }
//     else
//     {
//         n--;
//         return 2 * han(n) + 1;
//     }
// }
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int c = han(n);
//     printf("%d", c);
//     return 0;
// }


// int qing(int n){
//     if(n <= 2){
//         return 1;
//     }
//     else{
//         return qing(n-1)+ qing(n-2);
        
//     }
// }
// int main(){
//     int n = 0;
//     scanf("%d", &n);
//     int c = qing(n);
//     printf("%d", c);
//     return 0;
// }