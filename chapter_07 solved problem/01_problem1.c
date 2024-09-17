// write a function to count the number of odd numbers in an array 
#include <stdio.h>

int odd(int *arr);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("%d odd numbers in given array",odd(arr));
    return 0;
}


int odd(int *arr){

    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if(arr[i] % 2 == 0){
            continue;
            
        }
        count++;
    }
    return count;
}
