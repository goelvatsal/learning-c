#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int boxcars[100];
    int numofcars = 0;

    // scanf the number of boxcars
    scanf("%d", &numofcars);
    printf("%d\n", numofcars);

    // scanf each weight of the boxcars
    for(int i = 0; i < numofcars; i++) {
        scanf("%d", &boxcars[i]);
        printf("%d\n", boxcars[i]);
    }
    // calculate the avg and sum of the boxcars
    double sum = 0, avg = 0;
    for(int i = 0; i < numofcars; i++) {
        sum = sum + boxcars[i];
    }
    printf("sum = %.2lf", sum);
}

// calculate diff
// printf the result