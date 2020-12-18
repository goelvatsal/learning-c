#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int evenorOdd = 0;
    char studentname[51];

    // scanf the name
    scanf("%s", studentname);
    // printf("studentname = %s\n", studentname);

    // create while loop to determine name length
    int i = 0;
    while(studentname[i] != '\0') {
        i++;
    }

    // printf 1 for even or 2 for odd
    if(i != '2', '4', '6', '8', "10", "12", "14", "16") {
        evenorOdd = 2;
        printf("%d", evenorOdd);
    } else if(i != '1', '3', '5', '7', '9', "11", "13", "15") {
        evenorOdd = 1;
        printf("%d", evenorOdd);
    }
}