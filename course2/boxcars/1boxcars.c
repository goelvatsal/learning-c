#include <stdio.h>
int main(void) {

    // declare required variables (array)
    double array[52];
    double num_cars = 0.0;
    printf("Input: \n");

    // read the num of items
    scanf("%lf", &num_cars);

    // create a loop to read items into array
    for(int i = 0; i < num_cars; i++) {
        scanf("%d", &array[i]);
    }
    printf("\n");

    printf("Output: \n");
    for(int i = 0; i < num_cars; i++) {
        printf("%d\n", array[i]);
    }
        printf("\n");
<<<<<<< HEAD
    
    printf("Array elements = %d, %d, %d, %d, and %d\n", array[0], array[1], array[2], array[3], array[4]);
=======

>>>>>>> master
    // find the average
    double sum = array[0] + array[1] + array[2] + array[3] + array[4];
    printf("Sum = %.2lf\n", sum); 
    
    double avg = (sum / num_cars);
    printf("avg = %.2lf\n", avg);
    // debug: print the array using loop

    // iterate loop over the array and calculate diff and print the same

}