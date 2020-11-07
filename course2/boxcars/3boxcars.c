#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int num;

    // scanf the amount of cars
    printf("Input: \n");
    scanf("%d", &num);
    // printf("%d\n", num);

    // add all weight amounts
    double boxcars[50];
    double sum = 0; 
    // iterate nums to read input and calc sum
    for(int i = 0; i < num; i++) {
        scanf("%lf", &boxcars[i]);
        // printf("%.2lf\n", boxcars[i]);
        sum = sum + boxcars[i];
    }
    printf("\nOutput: \n");
    printf("sum = %.2lf\n", sum);
    
    // divide weight by amount of cars
    double avg = sum / num;
    printf("avg = %.2lf\n", avg);

    // printf diff
    // avg = 10, val = 12, output= -2
    // avg = 10, val = 7, output = 3
    // formula: avg - val
    for(int i = 0; i < num; i++) {
        printf("%.2lf\n", avg - boxcars[i]);
    }
}