#include <stdio.h>
int main(void) {

    int arraynum;
    // scanf the amount of ingredients & test
    scanf("%d", &arraynum);
    printf("ing num: %d\n", arraynum);

    double priceperp[100];
    // then scanf the price per ingriedients
    for(int i = 0; i < arraynum; i++) {
        scanf("%lf", &priceperp[i]);
        printf("priceperp[%d]: %.2lf\n",i, priceperp[i]);
    }
    
    double pound_req[100];
    // scanf price per pound
    for(int i = 0; i < arraynum; i++) {
        scanf("%lf", &pound_req[i]);
        printf("pound_req[%d]: %.2lf\n",i , pound_req[i]);
    }

    // add all the prices to sum
    double sum, price;
    for(int i = 0; i < arraynum; i++) {
        price = priceperp[i] * pound_req[i];
        sum = sum + price;
        
        printf("sum: %.6lf\n", sum);
    }
}