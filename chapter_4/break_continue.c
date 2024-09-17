#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            // Skip even numbers
            continue;
        }
        
        if (i == 7) {
            // Stop the loop when the number is 7
            break;
        }
        
        printf("%d\n", i);
    }
    
    return 0;
}
