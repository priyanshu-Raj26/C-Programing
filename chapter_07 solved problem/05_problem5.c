#include <stdio.h>

int num(int *arr,int find);

int main(){
    int arr[] = {9, 0, 0, 6, 3, 4, 1, 3, 8, 2};
    int find = 0;
    printf(" 0 is occurs %d times.",num(arr,find));
    return 0;
}



int num(int *arr,int find){
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        if(arr[i] == find){
            count++;
        }
    }
    return count;
}

