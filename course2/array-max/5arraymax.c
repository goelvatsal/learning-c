#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int numofitems = 0;
    double perpound = 0, amountreq = 0, price[101];

    // scan the number of items
    scanf("%d", &numofitems);
    printf("numofitems = %d\n", numofitems);

    // scan the price per pound
    for(int i = 0; i < numofitems; i++) {
        scanf("%lf", &perpound);
        printf("price per pound required = %lf\n", perpound);
    }

    // scan the amount of each ingredient required
    for(int i = 0; i < numofitems; i++) {
        scanf("%lf", &amountreq);
        printf("amountreq = %lf\n", amountreq);
    }

    // multiply price per pound with amount of each ingredient
    for(int i = 0; i < numofitems; i++) {
        price[i] = perpound * amountreq;
        price[i] = price[i] + price[i];
        printf("price = %f\n", price);
    }
}