#include <stdio.h>
int main(void) {
    // declare nessesary variables
    int city_amount[100];
    int city_num;

    // scanf the amount cities
    scanf("%d", &city_num);
    printf("city_num = %d\n", city_num);

    // create a for loop for enter the amount
    for(int i = 0; i < city_num; i++) {
        scanf("%d", &city_amount[i]);
        printf("city_amount = %d\n", city_amount[i]);
    }

    // create a if statement to find out the amount of cities above 10000
    int counter = 0;
    for(int i = 0; i < city_num; i++ ) {
        if(city_amount[i] < 10000) {
            counter = counter + 1;
        }
    }

    // printf the amount
    printf("counter = %d\n", counter+1);   
}