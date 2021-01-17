#include <stdio.h>
int main(void) {
    char wordScanned[51];

    // scan the word to sort
    scanf("%s", wordScanned);
    // printf("wordScanned = %s\n", wordScanned);

    // create 2 for loops to sort
    int swap = 0, numofelements = 51;
    for(int i = 0; i < numofelements - 1; i++) {
        // create if statement to pass check if i + 1 != to null
        for(int i = 0; i < numofelements - 1; i++){
            if(wordScanned[i + 1] == '\0') {
                break;
            }

            // create another if statement to swap variables
            if(wordScanned[i] > wordScanned[i + 1]) {
                swap = wordScanned[i + 1];
                wordScanned[i + 1] = wordScanned[i];
                wordScanned[i] = swap;
            }
        }
    }

    // print the sorted word
    printf("sorted word = %s\n", wordScanned);
}