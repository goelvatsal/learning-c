#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int numofcities = 0;
    int citypop[51];

    // scan the number of cities
    scanf("%d", &numofcities);
    // printf("numofcities is %d\n", numofcities);

    // scan the pop of each city
    for(int i = 0; i < numofcities; i++) {
        scanf("%d", &citypop[i]);
        // printf("city%d is %d\n", i, citypop[i]);
    }

    // run a if statement
    int counter = 0;
    for(int i = 0; i < numofcities; i++) {
        if(citypop[i] > 10000) {
            counter = counter + 1;
        }
    }
    // print the results
    printf("%d\n", counter-1);
}