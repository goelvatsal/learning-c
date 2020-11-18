#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int citypop[100];
    int city_amount;

    // scanf the amount of cities
    scanf("%d", &city_amount);

    // scanf the citypop
    for(int i = 0; i < city_amount; i++) {
        scanf("%d", &citypop[i]);
    }

    // create if statement to find out if citypop more than 10,000
    int popcounter = 0;
    for(int i = 0; i < city_amount; i++) {
        if(citypop[i] > 10000) {
            popcounter = popcounter + 1;
        }
    }

    // printf the cities above 10,000 pop
    printf("%d\n", popcounter);
}