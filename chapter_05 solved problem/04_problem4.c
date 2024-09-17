// #include <stdio.h>

// // 0,1,1,2,3,5,8,13,21,34,55,…
// int main(){
//     int a=-1,b=1,r,c;
//     printf("Enter a range:");
//     scanf("%d",&r);

//     for ( int i = 1; i <=r; i++)
//     {
//         c=a+b;
//         printf("%d ",c);
//         a=b;
//         b=c;

//     }

//     return 0;
// }

//       by useing recursion to find n-th term

#include <stdio.h>

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);

int fibonacci(int);

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 10;
    printf("The value of fibonacci series at %d is %d", n, fibonacci(n));
    return 0;
}