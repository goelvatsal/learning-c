#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int tfound = 0, foundornot = 0, wordlen = 0, len = 0;
    char wordscanned = 0, word[51];

    // scan word and find len
    scanf("%s", word);
    printf("word is = %s\n", word);

    while(word[len] != '\0') {
        len++;
    }
    printf("length of word = %d\n", len);
    
    printf("%s", word);
    // search for letter T or t
    // print 1 for t in first half; 2 for t in second half; -1 for no t at all
}