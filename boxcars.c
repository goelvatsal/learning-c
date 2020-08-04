#include <stdio.h>
int main(void) {
    // declare variable
    double total_weight = 0;
    double array[50];
    int num_cars = 0;

    // printf("Hello World!\n");

    printf("Number of boxcars: ");
    scanf("%d", &num_cars);

    // loop over the the num cars and printing the array
     for(int i = 0; i < num_cars; i++) {
        printf("Weight of boxcar %d: ", i+1);
        scanf("%lf", &array[i]);
    }

    // loop over array and printing values

}