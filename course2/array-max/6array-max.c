#include <stdio.h>
int main(void) {
    // initalize the variables
    int numIng = 0;

    // scan the number of ingredients
    scanf("%d", &numIng);
    printf("numIng == %d\n", numIng);

    // for n times, scan the pricePound
    double pricePound[numIng + 1];
    for(int i = 0; i < numIng; i++) {
        scanf("%lf", &pricePound[i]);
        printf("pricePound[%d] == %.3lf\n", i, pricePound[i]);
    }

    double poundReq[numIng + 1];
    // for n times, scan the poundReq
    for(int i = 0; i < numIng; i++) {
        scanf("%lf", &poundReq[i]);
        printf("poundReq[%d] == %.3lf\n", i, poundReq[i]);
    }

    double multOld[numIng + 1];
    // for n times, multiply 1st pricePound with poundReq...
    for(int i = 0; i < numIng; i++) { 
        multOld[i] = (pricePound[i] * poundReq[i]);
        printf("multOld[%d] == %.3lf\n", i, multOld[i]);
    }

    double multNew = 0.0;
    // store in var the number multiplied
    for(int i = 0; i < numIng; i++) {
         multNew = multNew + multOld[i];
    }

    // add all up and print.
    printf("array-max = %lf!\n", multNew);

}