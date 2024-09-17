#include <stdio.h>

int main(){
    char ch = '@';
    
 printf("The charecter is %c \n", ch);
 printf("The value of charecter is %d\n", ch);
//  97,122
if(ch>=97 && ch<=122){
    printf("This charecter is lowercase\n");
}
else{
    printf("This charecter is not lowercase\n");

}
    return 0;
}