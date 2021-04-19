#include <stdio.h>

int main(void) {
    char firstName[52];
    printf("What is your first name?\n");
    scanf("%s", &firstName);
//    printf("%s", firstName);
    for (int i = 0; i < 10; i++) {
        printf("char[%d]=%c\n", i, firstName[i]);
    }
}