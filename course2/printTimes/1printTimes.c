#include <stdio.h>
int main(void) {
    // declare nessasary variables
    char userstring[101];
    int scanfNum = 0;

    // scanf the number of times to print char
    scanf("%d", &scanfNum);
    // scanf the string user inputted
    scanf("%s", userstring);
    // printf("%s\n", userstring);

    // printf the string
    for(int i = 0; i < scanfNum; i++) {
        printf("%s", userstring);
    }
}