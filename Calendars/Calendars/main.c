// Calendars
// efournier
// Programming In C

#include <stdio.h>

// Write a program to calculate the day of the week of the first day of any year
int main(int argc, const char * argv[]) {
    int year;
    
    // Ask for the year (i.e. 2414)
    printf("Please input a year\n>>");
    scanf("%i", &year);
    
    // Check if year is valid (a positive integer year)
    while (year <= 0) {
        printf("Please input a positive integer year\n>>");
        scanf("%i", &year);
    }
    
    // If the year is not valid, tell user and ask for the year again
    
    // Assume that the current calendar rules were constant since 1/1/1

    return 0;
}
