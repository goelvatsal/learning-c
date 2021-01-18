#include <stdio.h>
int main(void) {
    char wordScanned[51];

    scanf("%s", wordScanned);
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
    printf("wordScanned = %s\n", wordScanned);

    char currLtr = '\0', prevLtr = '\0', prevIncLtr = '\0';
    int i = 0, numMultiLtr = 0;
    while(wordScanned[i] != '\0') {
        currLtr = wordScanned[i];

        if(prevLtr != '\0') {
            if(prevLtr == currLtr) {
                if(prevIncLtr != currLtr) {
                    numMultiLtr++;

                    prevIncLtr = currLtr;
                }
            }
        }

        prevLtr = currLtr;
        i++;
    }
    printf("numMultiLtr = %d\n", numMultiLtr);

}