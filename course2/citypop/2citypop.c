#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int city_num = 0;
    int city_pop[100];
    
    // create scanfs to find out citynum
    scanf("%d", &city_num);
    printf("City number is: %d\n", city_num);

    // create scanfs and loops to find out city pop per city
    for(int i = 0; i < city_num; i++) {
        scanf("%d", &city_pop[i]);
        printf("City population: %d\n", city_pop[i]);
    }

    // create if statement to check if city pop exceeds limit
    int city_exceed = 0;
    for(int i = 0; i < city_num; i++) {
        if(city_pop[i] > 10000) {
            city_exceed = city_exceed + 1;
        }
    }
    printf("%d", city_exceed);
}