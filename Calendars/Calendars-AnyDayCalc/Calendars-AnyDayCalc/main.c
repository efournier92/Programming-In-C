// Calendars
// AnyDayCalc
// efournier
// Programming In C

// Write a program to calculate the day of the week of any date.
// Assume that the current calendar rules were constant since 1/1/1.
#include <stdio.h>



// Check that the day is <= than the number of days in the month

// Remember leap years when you check February

// Calculate precession to January 1 of the input year

// Count number of days into the year

// Count the length of the months before the input month and the number of days into the input month

// January only 30 days because of reference date (01-01-0001)


// Write a program to calculate the day of the week of the first day of any year

int main(int argc, const char * argv[]) {
    int month, day, year, years_since, leap_years;
    int century_years, four_century_years;
    int total_leap_years, total_precesion, day_index;
    char go_again;
    const char *days[7], *past_future[1];
    days[0] = "Monday", days[1] = "Tuesday", days[2] = "Wednesday";
    days[3] = "Thursday", days[4] = "Friday", days[5] = "Saturday", days[6] = "Sunday";
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
    
    years_since = year - 1;
    leap_years = years_since/4;
    century_years = years_since/100;
    four_century_years = years_since/400;
    
    total_leap_years = leap_years - century_years + four_century_years;
    total_precesion = years_since + total_leap_years;
    day_index = total_precesion % 7;
    
    if (year < 2016) {
        past_future[0] = "Started";
    } else {
        past_future[0] = "Will Start";
    }
    
    printf("%iAD %s On A %s\n", year, past_future[0], days[day_index]);
    
    
    printf("Want to go again? (Y/N)\n>> ");
    scanf("%s", &go_again);
    if (go_again == 'Y' || go_again == 'y' ) {
        goto start;
    }
    
    return 0;
}
