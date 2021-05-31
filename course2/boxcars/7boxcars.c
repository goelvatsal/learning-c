#include <stdio.h>
int main(void) {
    // scan the number of boxcars
    int numBoxcar = 0;
    scanf("%d", &numBoxcar);
    printf("numBoxcars == %d\n", numBoxcar);

    // scan each boxcar weight and store it in a array
    double boxcarWeight[numBoxcar];
    for(int i = 0; i < numBoxcar; i++) {
        scanf("%lf", &boxcarWeight[i]);
        printf("boxcarWeight[%d] == %.3lf\n", i, boxcarWeight[i]);
    }

    // add all of the boxcar weights
    double sumWeight = 0;
    for(int i = 0; i < numBoxcar; i++) {
        sumWeight = sumWeight + boxcarWeight[i];
    }
    printf("sumWeight == %.3lf\n", sumWeight);

    // divide the sum by the number of boxcars
    double avgWeight = 0;
    for(int i = 0; i < numBoxcar; i++) {
        avgWeight = (sumWeight / numBoxcar);
    }
    printf("avgWeight == %.3lf\n", avgWeight);

    // compare the weight of the avg to the weight of the boxcars
    
    for(int i = 0; i < numBoxcar; i++) {
        if(boxcarWeight[i] > avgWeight) {
            // print the difference
            printf("-%.2lf\n", boxcarWeight[i] - avgWeight);
        }

        if(boxcarWeight[i] < avgWeight) {
            printf("%.2lf\n", avgWeight - boxcarWeight[i]);
        }

        if(boxcarWeight[i] == avgWeight) {
            printf("0.0\n");
        } 
    }
}