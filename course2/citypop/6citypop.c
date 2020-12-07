#include <stdio.h>
int main(void) {
    // declare nessesary variables
    int citypop[100];
    int numcity = 0;

    // scanf the number of cities
    scanf("%d", &numcity);
    printf("%d\n", numcity);

    // scanf the pop of each city
    for(int i = 0; i < numcity; i++) {
        scanf("%d", &citypop[i]);
        printf("%d\n", citypop[i]);
    }
    // run a if statement
    int counter = 0;
    for(int i = 0; i < numcity; i++) {
        if(citypop[i] >= 10000) {
            counter = counter + 1;
        }
    }

    printf("%d\n", counter);
}