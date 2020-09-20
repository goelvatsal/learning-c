#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int city_num = 0;

    // scanf the amount of cities
    scanf("%d", &city_num);
    // printf("Cities: %d\n", city_num);

    // scanf the the population per city
    int city_pop[100];
    for(int i = 0; i < city_num; i++) {
        scanf("%d", &city_pop[i]);
    //   printf("City population: %d\n", city_pop[i]);
    }

    // create if statement to figure out city limit of pop
    int city_exceed = 0;
    for(int i = 0; i < city_num; i++) {
        if(city_pop[i] > 10000) {
            city_exceed = city_exceed + 1;
        }
    }

    // printf the num of city
    printf("%d\n", city_exceed);
}