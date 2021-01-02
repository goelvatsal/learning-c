#include <stdio.h>
int main(void) {
    // scan word and find len
    char word[51];
    scanf("%s", word);
    printf("word is = %s\n", word);

    int len = 0;
    while(word[len] != '\0') {
        len++;
    }
    printf("length of word = %d\n", len);
    
    // find and print the middle letter
    // printf("%c\n", word[2]);

    int midpoint = 0;
    midpoint = len / 2;
    printf("the middle letter of word is %c\n", word[midpoint]);

    // search for letter T or t
    for(int i = 0; i < len; i++) {
        // printf("reading word[i] = %c\n", word[i]);
        // printf("word[i] == ('t' | 'T') = %d\n", word[i] == ('t' | 'T'));
        // printf("word[midpoint--] == ('t' | 'T')) = %d\n", word[midpoint--] == ('t' | 'T'));
        if(word[i] == ('t' | 'T')) {
            if(i > midpoint) {
                printf("1");
            }
            // break;
        } else {
            printf("-1");
            // break;
        }
    }
    // print 1 for t in first half; 2 for t in second half; -1 for no t at all
}