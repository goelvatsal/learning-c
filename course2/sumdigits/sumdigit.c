#include <stdio.h>
int sumofdigits(int);
int main(void) {
    int sumdigit = 0;
    // scan num to sum digits
    scanf("%d", &sumdigit);
    printf("sumdigit = %d\n", sumdigit);

    // check if sumdigit is negative;
    if (sumdigit <= 0) {
        printf("%d is not positive. Aborting...\n", sumdigit);
    } else {
        // print out the outputnum
        printf("sumofdigits = %d\n", sumdigit);
    }
}

// create function to add 1st digit of number to second 
int sumofdigits(int n) {
    
}