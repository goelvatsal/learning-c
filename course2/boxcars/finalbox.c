#include <stdio.h>
int main(void) {
    // declare nessasary variables
    double array[51];
    int num_cars = 0;
    
    // scanf for num_cars
    // printf("Input: \n");
    scanf("%d", &num_cars);
    for(int i = 0; i < num_cars; i++) {
        scanf("%lf", &array[i]);
    }
    printf("\n");
    
    // find sum and avg
    double sum = 0.0;
    double avg = 0.0;
    for(int i = 0; i < num_cars; i++) {
        sum = sum + array[i];
        // printf("Sum = %.2lf\n", sum);
        avg = (sum / num_cars);
        // printf("Avg = %.2lf\n", avg);
    }
    
    // create loop and find diff; display output
    double diff = 0;
    // printf("Output: \n");
    for(int i = 0; i < num_cars; i++) {
        diff = avg - array[i];
        printf("%.1lf\n", diff);
    }
}