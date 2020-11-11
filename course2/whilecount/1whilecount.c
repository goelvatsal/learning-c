#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int money = 0, new_money = 0;

    // start while loop to find out num of money
    while(money != -1) {
        scanf("%d", &money);
        new_money = new_money + money;
    }

    // printf results
    printf("%d\n", new_money+1);
}