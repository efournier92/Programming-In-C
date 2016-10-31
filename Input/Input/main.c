// Input
// efournier
// Programming in C

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // Ask the user for two floating point numbers.
    // Read in the numbers, and print them out, with their product.
    // Ask for two integer numbers and do the same.
    // Use this format: num_1 * num_2 = product
    
    float float_1, float_2, prod;
    
    printf("Please input 2 floating point numbers:\n>> ");
    scanf("%f %f", &float_1, &float_2);
    prod = float_1 * float_2;
    printf("1st Number = %.4f\n2nd Number = %.4f\n   Product = %.4f\n", float_1, float_2, prod);
    
    
    
    
    return 0;
}
