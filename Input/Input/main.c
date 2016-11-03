// Input
// efournier
// Programming in C

#include <stdio.h>
#include <stdlib.h>

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
    
    // Create a file and add any 10 floating point numbers, one per en the file and read in the ten numbers
    // Divide each number by 100.
    // Open a different file and write the divided numbers, one per line, in the reverse order.
    
    FILE *inFile;
    FILE *outFile;
    size_t len = 0;
    ssize_t read;
    char * line = NULL;
    float solution;
    inFile = fopen("inNums.txt","r");
    outFile = fopen("outNums.txt","w");
    
    while ((read = getline(&line, &len, inFile)) != -1) {
        solution = atof(line) / 100;
        fprintf(outFile,"%f\n", solution);
    }
    fclose(outFile);
    fclose(inFile);
    
    // Write logic to calculate the area of a circle and volume of a sphere.
    // Ask user for the radius, then calculate and output the circle area and the sphere volume.
    // Print the area and volume with three digits after the decimal.

    
    
    
    // Ask user for a length of time in the format hh:mm:ss.
    // Calculate and print out the time as a number of seconds.
    
    return 0;
}
