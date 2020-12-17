#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int charFirst = 0;
    int charLast = 0;
    
    // scanf the words
    printf("type num of letters in firstname\n");
    scanf("%d", &charFirst);
    printf("type num of letters in lastname\n");
    scanf("%d", &charLast);

    charFirst = charFirst + 1;
    charLast = charLast + 1;

    // printf the words, in opposite order and scanf
    char firstname[charFirst];
    char lastname[charLast];
    
    printf("Type the first name");
    scanf("%s", firstname);
}