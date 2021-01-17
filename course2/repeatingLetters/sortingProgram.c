#include <stdio.h>
int main(void) {

    // scan the word
    char wordScanned[51];
    scanf("%s", wordScanned);
    printf("wordScanned = %s\n", wordScanned);

    // create 2 for loops to sort word
    int swap = 0, numofelements = 51;
    for(int i = 0; i < numofelements - 1; i++) {
        for(int i = 0; i < numofelements - 1; i++) {
            if(wordScanned[i + 1] == '\0') {
                break;
            }

            if(wordScanned[i] > wordScanned[i + 1]) {
                // swap the letters
                swap = wordScanned[i + 1];
                wordScanned[i + 1] = wordScanned[i];
                wordScanned[i] = swap;
            }
        }
    }
    // printf the sorted word
    printf("wordScanned = %s\n", wordScanned);
}