#include <stdio.h>
int main(void) {
    // declare nessasary variables
    double perpound[100];
    int array_num = 0;

    // create scanfs to find ingredients and price per pound
    scanf("%d", &array_num);
    printf("Ingredients: %d\n", array_num);
    for(int i = 0; i < array_num; i++) {
        scanf("%lf", &perpound[i]);
        printf("Price per pound: %lf\n", perpound[i]);
    }

    // create scanfs to find amount required per pound
    double requiredp[100];
    double sum = 0, price = 0;
    for(int i = 0; i < array_num; i++) {
        scanf("%lf", &requiredp[i]);
        printf("%lf\n", requiredp[i]);
        price = requiredp[i] * perpound[i];
        sum = sum + price;
    }

    // printf the sum
    printf("%lf\n", sum);
}