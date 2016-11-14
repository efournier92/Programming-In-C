// Calendars
// efournier
// Programming In C

#include <stdio.h>

// Write a program to calculate the day of the week of the first day of any year
// Assume that the current calendar rules were constant since 1/1/1
int main(int argc, const char * argv[]) {
    int year, years_since, leap_years, century_years, four_century_years;
    int total_leap_years, total_precesion, day_index;
    char day_name;
    const char *days[7];
    days[0] = "Monday", days[1] = "Tuesday", days[2] = "Wednesday";
    days[3] = "Thursday", days[4] = "Friday", days[5] = "Saturday", days[6] = "Sunday";
    
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
    
    total_leap_years = leap_years - century_years + four_century_years;
    total_precesion = year + total_leap_years;
    day_index = total_precesion % 7;
    day_name = days[day_index];
    
    printf("01-01-%i is a %s", year, day_name)
    
    return 0;
}
