#include <stdio.h>   
int main(void) {

// create nessesary variables and arrays
    double array[52];
    int num_cars = 0;
    printf("Input: \n");
    scanf("%d", &num_cars);

// scanf the numbers into array[i]
    for(int i = 0; i < num_cars; i++) {
        scanf("%lf", &array[i]);
    }
    printf("\n");
    printf("Output: \n");

// create loop to access and print numbers
    for(int i = 0; i < num_cars; i++) {
        printf("%.2lf\n", array[i]);
    }
    printf("\n");

// create another loop to find sum
    double sum = 0.0;
    for(int i = 0; i < num_cars; i++) {
        sum = sum + array[i];
        // printf("Sum = %.2lf\n", sum);
    }
    // printf("\n");
    // printf("%.2lf", sum);

// create avg by dividing sum and num_cars 
    double avg = (sum / num_cars);
    printf("\n");
    // printf("Avg = %.2lf\n", avg);

// create loop, find diff, and print output
    printf("Sum = %.2lf\n", sum);
    printf("Avg = %.2lf\n", avg);
    double diff = 0;
    for(int i = 0; i < num_cars; i++) {
        diff = avg - array[i];
        // printf("i: %d --- diff (%.2lf) = avg(%.2lf) - array[i](%.2lf)\n", i , diff, avg, array[i]);
        printf("%.2lf\n", diff);
        // if(avg < array[i]) {
        //     printf("-%.2lf\n", diff);
        // } else if (array[i] == diff) {
        //     printf("0.0\n");
        // } else if(array[i] < avg) {
        //     diff = array[i] - avg;
        //     printf("%.2lf\n", diff);
        // }
    }
}