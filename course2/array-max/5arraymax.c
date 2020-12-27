#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int numofitems = 0;

    // scan the number of items
    scanf("%d", &numofitems);
    printf("numofitems = %d\n", numofitems);

    // scan the price per pound
    double perpound[101];
    for(int i = 0; i < numofitems; i++) {
        scanf("%lf", &perpound[i]);
        printf("price per pound required = %lf\n", perpound[i]);
    }

    // scan the amount of each ingredient required
    double amountreq[101];
    for(int i = 0; i < numofitems; i++) {
        scanf("%lf", &amountreq[i]);
        printf("amountreq = %lf\n", amountreq[i]);
    }

    // multiply price per pound with amount of each ingredient
    double oldprice, price;
    for(int i = 0; i < numofitems; i++) {
        oldprice = perpound[i] * amountreq[i];
        price = price + oldprice;
    }
    printf("price = %lf\n", price);
}