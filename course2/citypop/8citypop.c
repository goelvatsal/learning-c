#include <stdio.h>
int main(void) {
    // declare all nessasary variables
    int numofcities = 0;

    // scan the number of cities
    scanf("%d", &numofcities);
    // printf("numofcities = %d\n", numofcities);

    // scan the pop of each city
    // create if statement inside for loop
    int counter = 0;
    for(int i = 0; i < numofcities; i++) {
        int city = 0;
        scanf("%d", &city);
        // printf("city = %d\n", city);
        if(city > 10000) {
            counter++;
            // printf("counter = %d\n", counter);
        }
    }

    // printf cities that have pop of 10,000 or more
    printf("%d\n", counter);
}