// Calendars
// AnyDayCalc
// efournier
// Programming In C

// Write a program to calculate the day of the week of any date.
// Assume that the current calendar rules were constant since 1/1/1.
#include <stdio.h>
int main(int argc, const char * argv[]) {
    int month, day, year, years_since, leap_years;
    int century_years, four_century_years;
    int total_leap_years, total_precesion, day_index;
    char go_again;
    const char *days[7];
    days[0] = "Monday", days[1] = "Tuesday", days[2] = "Wednesday";
    days[3] = "Thursday", days[4] = "Friday", days[5] = "Saturday", days[6] = "Sunday";
    // January only 30 days because of reference date (01-01-0001)
    int days_in_month[12] = {30,28,31,30,31,30,31,31,30,31,30,31};
    int i, precession_this_year;
    
start:
    // Ask for a date (i.e. 07/04/2414)
    printf("Please input a data (mm/dd/yyyy)\n>> ");
    scanf("%i/%i/%i", &month, &day, &year);
    
    // Check if year is a positive integer year
    while (year <= 0) {
        // If the year is not valid, tell user and ask for the year again
        printf("Please input a positive integer year\n>> ");
        scanf("%i", &year);
    }
    
    // Check if month is between 1 & 12
    while (month < 1 || month > 12) {
        // If the year is not valid, tell user and ask for the year again
        printf("Please input a valid month\n>> ");
        scanf("%i", &month);
    }
    
    // Check that the day is positive
    while (day < 1 || day > 12) {
        // If the year is not valid, tell user and ask for the year again
        printf("Please input a valid day\n>> ");
        scanf("%i", &day);
    }
    
    // Calculate precession to January 1st of input year
    years_since = year - 1;
    leap_years = years_since/4;
    century_years = years_since/100;
    four_century_years = years_since/400;
    total_leap_years = leap_years - century_years + four_century_years;
    total_precesion = years_since + total_leap_years;
    day_index = total_precesion % 7;
    
    // Check if this year's a leap year
    if (years_since % 4 == 0 && (years_since % 100 != 0 || years_since % 400 == 0)) {
        days_in_month[1] = 29;
    }
    
    // Check that the day is valid according the number of days in the month
    while (day < 1 || day > days_in_month[month]) {
        // If the year is not valid, tell user and ask for the year again
        printf("Please input a valid day\n>> ");
        scanf("%i", &day);
    }
    
    // Count how many days into the year input date is
    i = 0;
    precession_this_year = 0;
    while (i < month) {
        precession_this_year += days_in_month[i];
        i++;
    }
    
    precession_this_year += day;
    
    // Count the length of the months before the input month and the number of days into the input month

    
    printf("Want to go again? (Y/N)\n>> ");
    scanf("%s", &go_again);
    if (go_again == 'Y' || go_again == 'y' ) {
        goto start;
    }
    
    return 0;
}
