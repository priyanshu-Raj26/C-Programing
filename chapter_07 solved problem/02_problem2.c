#include <stdio.h>

int main(){
    int arr[]= {1, 2, 3, 4, 5,};
    printf("%d\n",*(arr+2));
    printf("%d\n",*(arr+5));//aye array ka size reach kar raha h ish liye garbage value print ho ga 
    
    return 0;
}