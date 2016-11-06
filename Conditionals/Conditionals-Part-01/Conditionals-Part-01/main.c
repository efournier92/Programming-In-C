// Conditionals Part 01
// efournier
// Programming In C

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // Ask the user to input 4 floating point numbers.
    // Determine and print out the average value.
    // Determine and print out the maximum value.
    // Determine and print out the minimum value.
    float sum, ave, current_largest, current_smallest;
    float nums[4];
    int i;
    
    
    printf("Please input 4 floats:\n>> ");
    scanf("%f %f %f %f", &nums[0], &nums[1], &nums[2], &nums[3]);

    sum= nums[0] + nums[1] + nums[2] + nums[3];
    ave= sum / 4;
    
    current_largest= nums[0];
    current_smallest= nums[0];
    for (i= 0; i < 4; i++) {
        if (nums[i] > current_largest)
            current_largest = nums[i];
        if (nums[i] < current_smallest)
            current_smallest = nums[i];
    }
    
    printf("AVERAGE: %.2f", ave);
    printf("SMALLEST: %.2f", current_smallest);
    printf("LARGEST: %.2f", current_largest);
    
    
    
    
    // A teacher generates letter grades from test scores.
    // (which are always integers) using the following rubric:
    //    00-60  = F
    //    61-70  = D
    //    71-80  = C
    //    81-90  = B
    //    91-100 = A
    // Ask the user for a test score and print out the corresponding letter grade.
    // Print out a “+” or a “-” after the letter grade only according to the following rubic:
    //    1-3: -
    //    4-7: <none>
    //    8-0: +
    // Do not modify grades below 60.
    
    
    
    
    
    
    
    
}
