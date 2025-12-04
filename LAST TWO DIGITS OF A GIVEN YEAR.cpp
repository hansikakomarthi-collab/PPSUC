#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);  // Input the year

    int last_two = year % 100;  // Get last two digits

    printf("%02d", last_two);  // Print with leading zero if needed
    return 0;
}
