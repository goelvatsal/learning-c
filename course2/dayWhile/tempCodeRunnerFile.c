#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int totalPop = 0;

    // scanf the amount of citizens total
    scanf("%d", &totalPop);

    int daysPassed = 0, newInfect = 1, totalInfect = 1; 
    // create while loop to increment day and infection rate
    while(totalInfect < totalPop) {
        daysPassed = daysPassed + 1;
        newInfect = 2*newInfect;
        totalInfect = totalInfect + newInfect;
        // printf("Day %d: New cases: %d: Total cases: %d\n", daysPassed, newInfect, totalInfect);
    }
    
    // printf the num of days to infect total pop
    printf("%d\n", daysPassed+1);
}