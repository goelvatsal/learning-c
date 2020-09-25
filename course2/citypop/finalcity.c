#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int cityNum = 0;
    int cityPop[100];

    // create scanf to find out number of cities
    scanf("%d", &cityNum);
    printf("Number of cities: %d", cityNum);

    // create scanfs to find out pop per city
    for(int i = 0; i < cityNum; i++) {
        scanf("%d", &cityPop[i]);
        printf("Population of City %d is: %d", i, cityPop[i]);
    }

    // create if statement to see if pop is greater than limit
    int cityExceed = 0;
    for(int i = 0; i < cityNum; i++) {
        if(cityPop > 10000) {
            cityExceed = cityExceed + 1;
        }
    }

    // printf the city_exceed
    printf("%d", cityExceed);
}
