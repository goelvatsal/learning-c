#include <stdio.h>
int main(void) {
    // declare variable
    double total_weight = 0;
    double array[50];
    int num_cars = 0;

    // printf("Hello World!\n");

    scanf("%d", &num_cars);

    // loop over the the num cars and printing the array
     for(int i = 0; i < num_cars; i++) {
        printf("Weight of boxcar %d:", num_cars--);
        scanf("%d", array[num_cars]);
    }
}