#include <stdio.h>

int main(void) {
    char wordScanned[51];

    scanf("%s", wordScanned);
    
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
    printf("sorted word = %s\n", wordScanned);
    // printf("wordScanned = %s\n", wordScanned);

    char currLtr = '\0', prevLtr = '\0', prevIncLetter = '\0';
    int numMultiLtrs = 0, i = 0;
    while(wordScanned[i] != '\0') {
        currLtr = wordScanned[i];
        // printf("\n---Body: i=%d\n", i);
        // printf("currLtr = %c\n", currLtr);
        // printf("prevLtr = %c\n", prevLtr);
        
        // we should have the previous letter
        if (prevLtr != '\0') {
            if(currLtr == prevLtr) {
                if (prevIncLetter != currLtr) { 
                    numMultiLtrs++;
                    // printf("incremented numMultiLtrs = %d\n", numMultiLtrs);

                    prevIncLetter = currLtr;
                }
            }
        }

        // end of body
        // printf("\nEndOfBody\n");
        prevLtr = currLtr;
        i++;

        printf("prevLtr = %c, prevIncLetter = %c, numMultiLtrs = %d\n", prevLtr, prevIncLetter, numMultiLtrs);
    } 
    printf("\nnumMultiLtrs = %d\n", numMultiLtrs);
    // printf("%d\n", numMultiLtrs);
}