#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int num_items = 0;

    // create scanfs to find out the ingredients and price per pound
    scanf("%d", &num_items);
    // printf("Ingredients: %d\n", num_items);
    double perpound[100];
    for(int i = 0; i < num_items; i++) {
        scanf("%lf", &perpound[i]);
        // printf("Price per pound: %lf\n", perpound[i]);
    }

    // create scanfs to find out the required pounds to make meal
    double requiredp[100];
    double sum = 0;
    for(int i = 0; i < num_items; i++) {
        scanf("%lf", &requiredp[i]);
        // printf("Required pounds: %lf\n", requiredp[i]);
        double price = requiredp[i] * perpound[i];
        sum = sum + price;
    }
    
    // printf the sum
    printf("%lf\n", sum);
}