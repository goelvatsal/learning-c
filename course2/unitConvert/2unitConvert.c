#include <stdio.h>
int main(void) {
    // scan number of conversions to make
    int numofconversions = 0;
    scanf("%d", &numofconversions);
    printf("numofconversions = %d\n", numofconversions);

    // scan the num and the unit to convert
    double numToConvert = 0, outputNum;
    char scannedUnit;
    for(int i = 0; i < numofconversions; i++) {
        scanf("%lf %c\n", &numToConvert, &scannedUnit);
        printf("numToConvert = %lf, scannedUnit = %c\n", numToConvert, scannedUnit);

        // create if statements to convert prev unit to another
        if(scannedUnit == 'g') {
            printf("changed unit = lbs\n");
            outputNum = numToConvert * 0.002205;
            // print out converted num and unit
            printf("%lf lbs\n", outputNum);
        } else if(scannedUnit == 'm') {
            printf("changed unit = ft\n");
            outputNum = numToConvert * 3.2808;
            printf("%lf ft\n", outputNum);
        } else if(scannedUnit == 'c') {
            printf("changed unit = f\n");
            outputNum = numToConvert * 1.8 + 32;
            printf("%lf f\n", outputNum);
        }
    }
}