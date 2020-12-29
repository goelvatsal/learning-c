#include <stdio.h>
int main(void) {
    // declare all nessasary variables
    int numofwords = 0;

    // scan number of words
    scanf("%d", &numofwords);
    printf("numofwords = %d\n", numofwords);

    char word[101];

    int maxLen = 0;
    for(int i = 0; i < numofwords; i++) {
        scanf("%s", word);
        int newLen = 0;
        while(word[newLen] != '\0') {
            newLen++;
        }
        if(newLen > maxLen) {
            maxLen = newLen;
        }
        word[i] = '\0';
        // printf("%s %d ", word, newLen);
    }
    printf("%d\n", maxLen);
}