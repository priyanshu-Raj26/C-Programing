#include <stdio.h>

int large(int *arr,int size);

int main(){
    int arr[] = {1, 2, 39, 4, 45, 6, 7, 8, 9};

    printf("%d is largest number.",large(arr,9));
    return 0;
}


int large(int *arr,int size){
    int largest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

