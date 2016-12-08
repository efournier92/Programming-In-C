//  Loops_Part-02
//  efournier
//  programming in C

#include <stdio.h>


int main(int argc, const char * argv[]) {
    //  Count in user-specified base
    int z, y, x, w, v;
    int base, num;
    
    //Ask the user for the base
    printf("What base to use? (2-10)\n>> ");
    scanf("%i", &base);
    
    //Bases 2-10 are acceptable
    while (base < 2 || base > 10) {
        printf("Please input a base from 2-10\n>> ");
        scanf("%i", &base);
    }
    
    //Count from 0 to the maximum number which can be written in 4 digits.
    while (num < 10000) {
        while (num % base != 0) {
            
    }
    }
    //Strategy:
    //Use one variable to represent each digit
    //Always increment the least significant digit
    //Check for carrying one digit at a time (starting with the least significant digit)
    //Check to see if you have gotten to the top of the count.  (A good way is to have an extra digit and see if you carry into it.)
    
    //Write a program to print out a 1 month calendar for any month.
    //The program should ask for the  month in a year (i.e. 3/2134)
    //The program should check to make sure the date is valid
    //The format should look like a standard calendar which shows the days of the week in 1 row and aligns the dates for each day of the week in columns.
    //This is going to take a bit of work with output formatting.

    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
