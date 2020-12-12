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
        while(guess > correctNum) {
            printf("it is less\n");
            numGuesses++;
            scanf("%d", &guess);
        }
        // if num less then guess, print it is less
        while(guess < correctNum) {
            printf("it is more\n");
            numGuesses++;
            scanf("%d", &guess);
        }
    }

    // once num guessed, break; and print num of tries needed
    while(guess == correctNum) {
        printf("Number of guesses to correct answer: %d\n", numGuesses);
        break;
    }
}