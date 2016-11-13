// Conditionals-Part-02
// efournier
// Programming In C

#include <stdio.h>

// Write a program to convert base 10 integer numbers into Roman numerals
int main(int argc, const char * argv[]) {
    int num, i;
    int demoninations[7] = {1000, 500, 100, 50, 10, 5, 1};
    char numerals[7] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
    char numeralString[];
    
    // Ask for a number as input from the user.
    printf("Please Input a Number: \n>> ");
    scanf("%i", &num);
    
    // Convert any number from 1 (I) to 3999 (MMMCMXCIX)
    if (num > 4000) {
        printf("Too Large to Convert");
        while (num > 4000) {
            printf("Input a Number Between 1 & 3999");
        }
    }
    
    for (i=0; i<7; i++) {
        while (num > demoninations[i]) {
            numeralString.push(numerals[i]);
            num -= demoninations[i];
        }
    }
    
    // Test to make sure that the number given is in that range.
    // If it's not in range, tell the user and ask for another number.
    // Ask if the user wants to convert another number.
    
    
    
    return 0;
}
