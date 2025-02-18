#include <stdio.h>

int main() {
    int num;
    
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the MSB is set (1) or not (0)
    if (num & (1 << 31)) {
        printf("Set");
    } else {
        printf("Not Set");
    }
    
    return 0;
}
