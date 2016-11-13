// Conditionals-Part-02
// efournier
// Programming In C

#include <stdio.h>
#include <string.h>

// Write a program to convert base 10 integer numbers into Roman numerals
int main(int argc, const char * argv[]) {

    int num, i, j=0;
    int demoninations[7] = {1000, 500, 100, 50, 10, 5, 1};
    char numerals[7] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
    char numeralString[10], repeat_input;
start:

    // Ask for a number as input from the user.
    printf("Please Input a Number: \n>> ");
    scanf("%i", &num);
    
    // Test to make sure that the number given is in that range
    if (num > 4000) {

        while (num > 4000) {
            // If it's not in range, tell the user and ask for another number
            printf("Too Large to Convert\nInput a Number Between 1 & 3999\n>>");
            scanf("%i", &num);
        }
    }
    
    // Convert any number from 1 (I) to 3999 (MMMCMXCIX)
    for (i=0; i<7; i++) {
        while (num >= demoninations[i]) {
            numeralString[j] = numerals[i];
            num -= demoninations[i];
            j++;
        }
    }
    printf("%s\n", numeralString);
    
    // Ask if the user wants to convert another number
    printf("Want to go again? (Y/N)\n>> ");
    scanf("%s", &repeat_input);
    
    if (repeat_input == 'Y' || repeat_input == 'y') {
        // Reset stored variables
        memset(numeralString, 0, sizeof(numeralString));
        j=0;
        goto start;
    }
    
    return 0;
}
