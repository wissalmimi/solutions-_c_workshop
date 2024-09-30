#include <stdio.h>

int main() {
    float average;
    printf("Enter the student's average: ");
    scanf("%f", &average);
    
    if (average < 10) {
        printf("Recalé.\n");
    } else if (average >= 10 && average < 12) {
        printf("Mention passable.\n");
    } else if (average >= 12 && average < 14) {
        printf("Mention assez bien.\n");
    } else if (average >= 14 && average < 16) {
        printf("Mention bien.\n");
    } else {
        printf("Mention très bien.\n");
    }
    
    return 0;
}
