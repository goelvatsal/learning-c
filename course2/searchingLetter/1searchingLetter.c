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

    int midpoint = len / 2;
    // printf("the middle letter of word is %c\n", word[midpoint]);

    // search for letter T or t
    int result = -1;

    for(int i = 0; i < len; i++) {
        //printf("loop variable: %d\n", i);
        // printf("reading word[i] = %c\n", word[i]);
        // printf("word[i] == ('t' | 'T') = %d\n", word[i] == ('t' | 'T'));
        // printf("word[midpoint--] == ('t' | 'T')) = %d\n", word[midpoint--] == ('t' | 'T'));
        if(word[i] == 't' || word[i] == 'T') {
            //printf("found t: %c\n", word[i]);
            if (i > midpoint) {
                //printf("i > midpoint: %d\n", i > midpoint);
                result = 2; 
            }
            else {
                //printf("i < midpoint: %d\n", i < midpoint);
                result = 1;
            }
            break;
        }
    }
    printf("%d\n", result);
    // print 1 for t in first half; 2 for t in second half; -1 for no t at all
}