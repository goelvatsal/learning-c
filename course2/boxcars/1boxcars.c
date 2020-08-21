#include <stdio.h>
int main(void) {

    // declare required variables (array)
    double array[52];
    int num_cars = 0;
    printf("Input: \n");

    // read the num of items
    scanf("%d", &num_cars);

    // create a loop to read items into array
    for(int i = 0; i < num_cars; i++) {
        scanf("%lf", &array[i]);
    }
    printf("\n");

    // find the average
    double sum = 0.0;
    for(int i = 0; i < num_cars; i++) {
        sum = sum + array[i];
    }

    int avg = (sum / num_cars);
    printf("Average = %d\n", avg);

    // Print number changes for variables
    printf("Output: \n");
    // iterate loop over the array and calculate diff and print the same
    for(int i = 0; i < num_cars; i++) {
        double diff = avg - array[i];
        printf("%.2lf\n", diff); 
        
    }
    // debug: print the array using loop
    // for(int i = 0; i < num_cars; i++) {
    //     printf("%d\n", array[i]);
    // }
}