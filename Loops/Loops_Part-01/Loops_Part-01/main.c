// Loops_Part-01
// efournier
// Programming in C

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int i, num1, num2, fibnum, k;
    float x, y;
    const char *sep[1];
    sep[0] = "*************\n";
    
// Count by 2’s from -33 to 10
    printf("%s", sep[0]);
    for (i = -33; i <= 10; i += 2) {
        printf("%i\n", i);
    }
    
// Count by 5’s from 243 to 288
    printf("%s", sep[0]);
    for (i = 243; i <= 288; i += 5) {
        printf("%i\n", i);
    }
    
// Count by -7’s from 133 to zero
    printf("%s", sep[0]);
    for (i = 133; i >= 0; i += -7) {
        printf("%i\n", i);
    }

// Evaluate the function: y = x^3 - 4x^2 + 2x + 8
    printf("%s", sep[0]);
    printf("  X      Y\n");
    
    // Print values of X from -4.0 to 4.0 at each increment of 0.1
    for (x = -4.0; x <= 4.0; x += 0.1) {
        y = pow(x, 3) - (4 * pow(x, 2)) + (2 * x) + 8;
        printf("%4.1f   %4.1f\n", x, y);
    }
    printf("%s", sep[0]);

// Calculate the first n Fibonacci numbers
    num1 = 1;
    num2 = 1;
    printf("How Many Fibonacci Numbers?\n>> ");
    scanf("%i", &k);
    
    printf("%i\n", num1);
    printf("%i\n", num2);
    for (i = 1; i <= (k - 2); i++) {
        fibnum = num1 + num2;
        num2 = num1;
        num1 = fibnum;
        printf("%i\n", fibnum);
    }
    
// Calculate the nth Fibonacci number
    fibnum = 1;
    num1 = 1;
    num2 = 1;
    printf("Which nth Fibonacci Number\n>> ");
    scanf("%i", &k);

    for (i = 1; i <= (k - 2); i++) {
        fibnum = num1 + num2;
        num2 = num1;
        num1 = fibnum;
    }
    printf("The %ith FibNum is %i\n", k, fibnum);
    
    
    return 0;
}
