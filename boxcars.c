#include <stdio.h>
int main(void) {
    // declare variable
    double array[52];

    // printf("Hello World!\n");

    int num_cars = 0;
    // printf("Number of boxcars: ");
    scanf("%d", &num_cars);

    // loop over the the num cars and printing the array
     int i = 0;
     for(int i = 0; i < num_cars; i++) {
        // printf("Weight of boxcar %d: ", i+1);
        scanf("%lf", &array[i]);
    }
  
    // // loop over array and printing values
    // printf("What boxcar variable do you want to retrieve? ");
    // scanf("%lf", &array[51]);
    // printf("Boxcar %.0lf weighs %.2lf\n", array[51], array[]);
}