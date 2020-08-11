#include <stdio.h>
int main(void) {
    // declare variable
    double array[52];

    // printf("Hello World!\n");

    int num_cars = 0;
    // printf("Number of boxcars: ");
    scanf("%d", &num_cars);

    // loop over the the num cars and printing the array
    // double total_weight = 0;
     for(int i = 0; i < num_cars; i++) {
        // printf("Weight of boxcar %d: ", i+1);
        scanf("%lf", &array[i]);
    }

    if(array[i] <= 1) {
        double total_weight = 0;
        
    }

    // total_weight = array[i]

    // printf("total_weight is %.1lf\n", total_weight);
    // // loop over array and printing values
    // printf("What boxcar variable do you want to retrieve? ");
    // scanf("%lf", &array[51]);
    // printf("Boxcar %.0lf weighs %.2lf\n", array[51], array[]);
}