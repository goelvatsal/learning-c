#include <stdio.h>
int main(void) {
    // declare variable
    double array[52];

    // printf("Hello World!\n");

    int num_cars = 0;
    // printf("Number of boxcars: ");
    scanf("%d", &num_cars);

    // loop over the the num cars and printing the array
    // int i = 0;
    // double readValue = 0.0;
    for(int i = 0; i < num_cars; i++) {
        // printf("Weight of boxcar %d: ", i+1);
        scanf("%lf", &array[i]);
    }

    //Printing values
    // for(int i = 0; i < num_cars; i++) {
    //     printf("%.2lf\n", array[i]);
    // }

    for(int i = 0; i < num_cars; i++) {
        // printf("Array[%d] = %.2lf\n", i, array[i]);
    }

    // calculating sum
    double sum = 0.0;
    for(int i = 0; i < num_cars; i++) {
        sum = sum + array[i];
        // printf("Sum = %.2lf & i = %d\n", sum, i);
    }
    printf("Sum = %.2lf \n", sum);
    double avg = (sum / num_cars);
    printf("The average is %.2lf", avg);

    // total_weight = array[i]

    
    for(int i = 0; i < num_cars; i++) {
        if(avg < i) {
            printf("-%.0lf", array[i]);
        }
    } 

    // printf("total_weight is %.1lf\n", total_weight);
    // // loop over array and printing values
    // printf("What boxcar variable do you want to retrieve? ");
    // scanf("%lf", &array[51]);
    // printf("Boxcar %.0lf weighs %.2lf\n", array[51], array[]);
}