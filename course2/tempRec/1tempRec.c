#include <stdio.h>
int main(void) {
    // declare nessasary variables
        int minTemp = 0, maxTemp = 0;
        int tempScan = 0;
    // scanf the min and max temps
        scanf("%d", &minTemp);
        scanf("%d", &maxTemp);

    // scanf the user temps
        scanf("%d", &tempScan);
        while(tempScan >= minTemp && tempScan <= maxTemp) {
            printf("Nothing to report\n");
            scanf("%d", &tempScan);
        } 

        // when -999 scanned, end program
        if (tempScan != -999) {
            printf("Alert!\n");
        }
}