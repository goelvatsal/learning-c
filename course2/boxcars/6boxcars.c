#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int carweights[51];
    int numofcars = 0;

    // scan the number of boxcars
    scanf("%d", &numofcars);
    printf("numofcars = %d\n", numofcars);

    // scan the weights of each boxcar
    for(int i = 0; i < numofcars; i++) {
        scanf("%d", &carweights[i]);
        printf("carweights[%d] = %d\n", i, carweights[i]);
    }

    double avg = 0, sum = 0;
    // find the sum and the avg of all the boxcars
    for(int i = 0; i < numofcars; i++) {
        sum = sum + carweights[i];
        avg = (sum / numofcars);
    }
    printf("sum = %.1lf\n", sum);
    printf("avg of boxcar = %.1lf\n", avg);

    // compare avg to the weights of the boxcars
    for(int i = 0; i < numofcars; i++) {
         // scan the changed weights of the boxcars
        printf("%.1lf\n", avg - carweights[i]);
    }
}