#include <stdio.h>
int main(void) {
    // declare nessasary variables
    double boxcars[50];
    int boxcars_num = 0;

    // scanf the num of boxcars
    scanf("%d", &boxcars_num);
    printf("boxcars_num: %d\n", boxcars_num);


    // add all boxcar weights
    int sum = 0;
    for(int i = 0; i < boxcars_num; i++) {
        scanf("%lf", &boxcars[i]);
        sum = sum + boxcars[i];
    }
    printf("sum = %d\n", sum);

    // divide weights by num of boxcars
    double avg = 0;
    for(int i = 0; i < boxcars_num; i++) {
        avg = sum / boxcars_num;
    }
    printf("avg = %.2lf\n", avg);

    // prinf the num of changed weights
    for(int i = 0; i < boxcars_num; i++) {
        if(boxcars[i] != avg) {
            printf("%.2lf\n", avg - boxcars[i]);
        }
    }
}