// Operators
// efournier
// Programming in C

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    // Convert temperatures from °F into Celsius.
    // Use 27 °F as an example.
    // Use formula (C = (F-32.)/1.8)
    float tempF, tempC;
    tempF=27;
    tempC = (tempF-32.)/1.8;
    printf("27°F = %.2f°C\n", tempC);
    
    
    // Evaluate polynomial 3x^3 + 5x^2 – 6 for x=2.55
    float ans, x;
    x=2.55;
    ans=(3 * pow(x,2)) + (5 * pow(x,2) - 6);
    printf("3x^3 + 5x^2 – 6 = %.2f\n", ans);
    
    
    // Evaluate and print out the result of 2.31 x 10^6  x  2.887 x 10^-5 ) / ( 7.16 x 10^-4  +  6.09 x 10^3
    float sol;
    sol=(2.31 * pow(10,6) * 2.887 * pow(10,-5)) / ((7.16 * pow(10,-4)) + (6.09 * pow(10,3)));
    printf("Result = %.2f\n\n", sol);
    
    
    // Take a four digit number and print out the ones digit, the tens digit, the hundreds digit, and the thousands digit.
    // Ese 5296 as an example
    char ones, tens, hund, thou;
    int num=5296;
    
    ones=num % 10;
    tens=((num - ones) / 10) % 10;
    hund=((num - ((tens * 10) - ones)) / 100) % 10;
    thou=(num - ((hund * 100) - (tens * 10) - ones) / 100) % 10;
    
    printf("     ONES = %i\n", ones);
    printf("     TENS = %i\n", tens);
    printf(" HUNDREDS = %i\n", hund);
    printf("THOUSANDS = %i\n\n", thou);
    
    return 0;
}
