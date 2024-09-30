#include <stdio.h>

int main() {
    int n;
    printf("entrer un nomre:");
    scanf("%d",&n);
    for (int i = 1 ; i <=10 ;i++) {
        printf("%d * %d = %d",n , i, n *i );
    }
    return 0;
}
