#include <stdio.h>
int main(void) {
    // declare all nessasary variables
    int numofwords = 0, length = 0;

    // scan number of words
    scanf("%d", &numofwords);
    printf("numofwords = %d\n", numofwords);

    // start a while loop
    char word[101];
    for(int i = 0; i < numofwords; i++) {
        scanf("%s", word);
        length = 0;
        while(word[length] != '\0') {
            length++;
        }
        // printf("%s %d ", word, length);
    }
}