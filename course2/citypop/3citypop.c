#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int numCity = 0;
    int citypop[100];

    // scanf the amount of cities and create loop
    scanf("%d", &numCity);
    for(int i = 0; i < numCity; i++) {
        scanf("%d", &citypop[i]);
        // printf("%d\n", citypop[i]);
    }

    int counter = 0;
    // create if statement to find amount of cities above 10000
    for(int i = 0; i < numCity; i++) {
        if(citypop[i] > 10000) {
            counter = counter + 1;
        }    
    }
    printf("%d\n", counter);
}
// printf num of cities above 10000