#include <stdio.h>
int main(void) {
    // declare nessesary variables
    int starNum = 0;

    // scanf for num of stars
    scanf("%d", &starNum);

    // create nested for loops
    for(int i = 0; i < starNum; i++) {
        for(int j = 0; j < starNum; j++) {
            // print array of stars
            printf("*");
        // printf("%d", j);
        }
    printf("\n");    
    }
}