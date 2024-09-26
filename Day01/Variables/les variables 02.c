#include <stdio.h>

int main() {
    int a;
    
    printf("iter neber ");
    scanf("%d", &a);
    
    if (a % 2 == 0)
        printf("this nbr is even");
    else
        printf("this nbr is odd");
    return 0;
}