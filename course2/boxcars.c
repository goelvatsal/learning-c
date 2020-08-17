#include <stdio.h>
int main(void) {
    // declare variable
    double array[52];

    // printf("Hello World!\n");

    int num_cars = 0;
    // printf("Number of boxcars: ");
    printf("\nInput: \n");
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
    // printf("Sum = %.2lf \n", sum);
    double avg = (sum / num_cars);
    // printf("The average is %.2lf\n", avg);

    // total_weight = array[i]

    // First, create if statement inside the for loop. Then, if the actual weight for each boxcar 
    // is more than the average, then calculate the diff between the boxcar and the avg (boxcar - avg) and display diff.
    // else then add the weight that is required for the boxcars to have the same weight.
    printf("\nOutput: \n");
    for(int i = 0; i < num_cars; i++) {
        // printf("Inside the loop %d times\n", i);
        if(avg < array[i]) {
            printf("%.1lf\n", avg - array[i]);
        } else {
            double diffadd = 0;
            diffadd = avg - array[1];
            printf("%.1lf\n", diffadd);
        }
    } 

    // printf("total_weight is %.1lf\n", total_weight);
    // // loop over array and printing values
    // printf("What boxcar variable do you want to retrieve? ");
    // scanf("%lf", &array[51]);
    // printf("Boxcar %.0lf weighs %.2lf\n", array[51], array[]);
}