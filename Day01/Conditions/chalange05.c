#include <stdio.h>

int main() {
    int year, months, days, hours, minutes, seconds;
    printf("Enter a year: ");
    scanf("%d", &year);
    
    months = year * 12;
    days = year * 365;
    hours = days * 24;
    minutes = hours * 60;
    seconds = minutes * 60;
    
    printf("%d years is equal to:\n", year);
    printf("%d months\n", months);
    printf("%d days\n", days);
    printf("%d hours\n", hours);
    printf("%d minutes\n", minutes);
    printf("%d seconds\n", seconds);
    
    return 0;
}
