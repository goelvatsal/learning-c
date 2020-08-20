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

    printf("Output: \n");
    for(int i = 0; i < num_cars; i++) {
        printf("%.2lf\n", array[i]);
    }
        printf("\n");
    
    // printf("Array elements = %d, %d, %d, %d, and %d\n", array[0], array[1], array[2], array[3], array[4]);

    
    // iterate loop over the array and calculate diff and print the same

    // find the average
    double sum = 0.0;
    for(int i = 0; i < num_cars; i++) {
        // double temp = 0;
        // temp += (array[i]);
        sum = sum + array[i];
        printf("Sum = %.2lf\n", sum);
        printf("Array[%d] = %d", i, array[i]);
    }

    // int sum = array[0] + array[1] + array[2] + array[3] + array[4];
    // printf("Sum = %d\n", sum); 
    
    int avg = (sum / num_cars);
    // printf("avg = %d\n", avg);

    // debug: print the array using loop
    // for(int i = 0; i < num_cars; i++) {
    //     printf("%d\n", array[i]);
    // }
}