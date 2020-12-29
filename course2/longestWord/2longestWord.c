#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int numofwords = 0;

    // scan the number of words
    scanf("%d", &numofwords);
    printf("numofwords = %d\n", numofwords);

    // scan all the words
    char word[101];
    int maxLen = 0;
    for(int i = 0; i < numofwords; i++) {
        int newLen = 0;
        scanf("%s", word);
        // word[i] != '\0';

        // find lengths
        newLen = 0;
        while(word[newLen] != '\0') {
            newLen++;
        }

        // use maxLen and newLen to find biggest num
        if(newLen > maxLen) {
            maxLen = newLen;
        }
        printf("%s%d ", word, newLen);
    }
    // printf the biggest num
    printf("%d\n", maxLen);
}