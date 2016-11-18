// Loops_Part-01
// efournier
// Programming in C

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    const char *sep[1];
    sep[0] = "**********\n";
    
// Count by 2’s from -33 to 10
    printf("%s", sep[0]);
    for (i = -33; i >= -33 && i <= 10; i += 2) {
        printf("%i\n", i);
    }
    
// Count by 5’s from 243 to 288
    printf("%s", sep[0]);
    for (i = 243; i >= 243 && i <= 288; i += 5) {
        printf("%i\n", i);
    }
    
// Count by -7’s from 133 to zero
    printf("%s", sep[0]);
    for (i = 133; i >= 0; i += -7) {
        printf("%i\n", i);
    }

// Evaluate the function: y = x^3 - 4x^2 + 2x + 8

// Print values of X from -4.0 to 4.0 at each increment of 0.1.
    
    return 0;
}
