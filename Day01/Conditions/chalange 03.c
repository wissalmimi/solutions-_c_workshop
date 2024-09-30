#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    if (a == b) {
        printf("Triple of their sum is: %d\n", 3 * (a + b));
    } else {
        printf("Their sum is: %d\n", a + b);
    }
    
    return 0;
}
