//  main.c
//  Print-Output
//  efournier

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // Declare and assign 3 integer variables to: -23, 2, 14254.
    // Print the variables along with the variable names (i.e. num1 = -23) one per line.
    // Right hand justify the three numbers
    int i, j, k;
    i=-24;
    j=2;
    k=14254;
    
    printf("%5d\n%5d\n%5d\n\n", i, j, k);

// Declare and assign 3 floating point variables to -23.84, 0.0024, 21423.2.
// When the variables are printed (again one per row), show the same number of digits after the decimal and align the decimals in a column.
// Output the values three times.
    float x, y, z;
    x=-23.84;
    y=0.0024;
    z=21423.2;
    
    printf("%10.4f\n%10.4f\n%10.4f\n\n", x, y, z);
    
    // Repeat previous using scientific notation
    
    printf("%13e\n%13e\n%13e\n\n", x, y, z);
    
    // Print your name in big block letters.
    // Each letter should have a height of seven characters and a width of five characters.

    
    return 0;
    
}



//-
//-
//-
