#include <stdio.h>
int main(void) {
    // declare nessasary variables
    double array[11];
    int array_num = 0;

    // create scanf in loop to ask for num and price per pound
    scanf("%d", &array_num);
    for(int i = 0; i < array_num; i++) {
        scanf("%lf", &array[i]);
        // printf("%.2lf\n", array[i]);
    }

    // create more scanfs to take input for how many pounds
    double divide[array_num];
    double money_items = 0;
    for(int i = 0; i < array_num; i++) {
        scanf("%lf", &divide[i]);
        double money_items = divide[array_num] / array[i];
    }
    printf("%lf\n", money_items);
}
// printf the total_price
