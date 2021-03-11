#include <stdio.h>
int sumofdigits(int);
int main(void) {
    int sumdigit = 0;
    // scan num to sum digits
    scanf("%d", &sumdigit);
    printf("sumdigit = %d\n", sumdigit);

    // print out the outputnum
    int sum = sumofdigits(sumdigit);
    printf("%d\n", sum);

    // make function recursive(?)
}

// create function to add 1st digit of number to second
int sumofdigits(int n) {
    // sumdigit
}