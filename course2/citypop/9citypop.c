#include <stdio.h>
int main(void) {
    // scan the number of cities
    int numofcity = 0;
    scanf("%d", &numofcity);
    printf("numofcity == %d\n", numofcity);

    // scan the population of each city
    int citypop[numofcity];
    for(int i = 0; i < numofcity; i++) {
        scanf("%d", &citypop[i]);
        printf("citypop[%d] = %d\n", i, citypop[i]);
    }

    // create if statement in for loop
    int cityabovetenthousand = 0;
    for(int i = 0; i < numofcity; i++) {
        if(citypop[i] > 10000) {
            cityabovetenthousand++;
        }
    }

    // print if pop over 10000
    printf("cityabovetenthousand == %d\n", cityabovetenthousand);
}