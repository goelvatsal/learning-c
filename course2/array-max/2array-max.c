#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int array_num;
    double perpound[100];

    // create scanfs and arrays to find out price per pound and ingredients
    scanf("%d", &array_num);
    // printf("Ingredients: %d\n", array_num);
    for(int i = 0; i < array_num; i++) {
        scanf("%lf", &perpound[i]);
        // printf("Price Per Pound = %lf; i = %d\n", perpound[i], i);
    }

    // create another array for required amount per pound
    double requiredp[100];
    double sum;
    double price;
    for(int i = 0; i < array_num; i++) {
        scanf("%lf", &requiredp[i]);
        // printf("Required amount per pound: %lf\n", requiredp[i]);
        price = perpound[i] * requiredp[i];
        sum = sum + price;
    }

    // print the price
    printf("%lf", sum);
}