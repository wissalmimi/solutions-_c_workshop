#include <stdio.h>

int main() {
    int day, month, year;
    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    
    const char* months[] = {"January", "February", "March", "April", "May", "June", "July", 
                            "August", "September", "October", "November", "December"};
    
    printf("%d-%s-%d\n", day, months[month - 1], year);
    
    return 0;
}
