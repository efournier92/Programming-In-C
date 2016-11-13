// Calendars
// efournier
// Programming In C

#include <stdio.h>

// Write a program to calculate the day of the week of the first day of any year
// Assume that the current calendar rules were constant since 1/1/1
int main(int argc, const char * argv[]) {
    int year;
    
    // Ask for the year (i.e. 2414)
    printf("Please input a year\n>>");
    scanf("%i", &year);
    
    // Check if year is valid (a positive integer year)
    while (year <= 0) {
        // If the year is not valid, tell user and ask for the year again
        printf("Please input a positive integer year\n>>");
        scanf("%i", &year);
    }
    
    years_since = year - 1;
    leap_years = elapsed_years/4;
    century_years = year/100;
    four_century_years = year/400;
    
    return 0;
}
