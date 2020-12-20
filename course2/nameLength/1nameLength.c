#include <stdio.h>
int main(void) {
    // declare nessasary variables
    char studentname[51];

    // scanf the name
    scanf("%s", studentname);
    // printf("studentname = %s\n", studentname);

    // create while loop to determine name length
    int i = 0;
    while(studentname[i] != '\0') {
        i++;
    }
    printf("student name length = %d\n", i);

    // printf 1 for even or 2 for odd
    int evenorOdd = 0;
    if((i % 2) == 0) {
        evenorOdd = 1;
    } else {
        evenorOdd = 2;
    }

    printf("%d\n", evenorOdd);
}