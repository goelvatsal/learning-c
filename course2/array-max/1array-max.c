#include <stdio.h>
int main(void) {
    // Declare nessesary variables
    int array_num = 0;
    double array[100];

    // Find out price per pound and how many ingredients
    scanf("%d", &array_num);
    // printf("Number of ingredients: %d\n", array_num);
    for(int i = 0; i < array_num; i++) {
        scanf("%lf", &array[i]);
        printf("Price per pound: %lf; i = %d; array_num = %d\n", array[i], i, array_num);
    }

    // Find out how much of each pound needed
    double divide[100];
    for(int i = 0; i < array_num; i++) {
        scanf("%lf", &divide[i]);
        printf("Pound needed per ingredient: %lf; i = %d; array_num = %d\n", divide[i], i, array_num);
    }
    
    // price per pound * quantity of each pound
    double sum = 0;
    for(int i = 0; i < array_num; i++) {
        double price = array[i] * divide[i];
        sum = sum + price;
        // printf("%lf", money_items);
    }

    // printf the money_items
    printf("%lf", sum);
}