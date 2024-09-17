// #include <stdio.h>

// int max(int *a, int *b);

// int main(){
//     int a = 69, b = 96;
//     max(&a,&b);
//     return 0;
// }


// int max(int *a, int *b){
//     if(*a<*b){
//         printf("%d is larger.",*b);
//     }
//     else{
//         printf("%d is larger.",*a);
//     }
// }

#include <stdio.h>

int max(int *a, int *b);

int main(){
    int a = 69, b = 96;
    printf("%d is larger.\n", max(&a, &b));
    return 0;
}

int max(int *a, int *b){
    return (*a < *b) ? *b : *a;
}
