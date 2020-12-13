#include <stdio.h>
int main(void) {
    // declare nessesary variables
    int correctNum = 0;
    int guess = 0;
    int numGuesses = 0;

    // scanf the number to guess
    scanf("%d", &correctNum);
    printf("correctNum = %d\n", correctNum);

    // scanf for as long as the guess
    while(guess != correctNum) {
        // if num more than guess, print it is more
        scanf("%d", &guess);
        printf("%d\n", guess);
        if(guess > correctNum) {
            printf("it is less\n");
            numGuesses++;
        } else if(guess < correctNum) {
            // if num less then guess, print it is less
            printf("it is more\n");
            numGuesses++;
        }
        printf("numGuesses = %d\n", numGuesses);
    }

    // once num guessed, break; and print num of tries needed
    printf("Number of tries needed\n %d\n", numGuesses+1);
}