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
    printf("%.2f\n", tempC);
    
    // Evaluate polynomial (3x3 + 5x2 – 6) for x=2.55
    
    // Evaluate and print out the result of ( 2.31 x 106  x  2.887 x 10-5 ) / ( 7.16 x 10-4  +  6.09 x 103 )
    float sol, ans;
    sol = (2.31 * pow(10, 6) * 2.887 * pow(10, -5)) / ((7.16 * pow(10, -4)) + (6.09 * pow(10,3)));
    printf("%.2f\n", sol);
    
    // Take a four digit number and print out the ones digit, the tens digit, the hundreds digit, and the thousands digit.
    // Ese 5296 as an example

    
    
    
    
    return 0;
}
