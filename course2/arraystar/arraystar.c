#include <stdio.h>
int main(void) {
    // 1. declare nessasary variables
    int starNum = 0;

    // 2. create scanf to ask for input
    scanf("%d", &starNum);

    // 3. create for loop & printf grid of starsl
    for(int i = 0; i < starNum; i++) {
        for(int i = 0; i < starNum; i++) {
            printf("*");
        }
        // printf(" %d\n", i);
        printf("\n");
    }
}