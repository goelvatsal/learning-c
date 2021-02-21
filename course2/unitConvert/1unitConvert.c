    #include <stdio.h>
    int main(void) {
        // scan all the inputs includig the label
        int numofconversions = 0;
        scanf("%d", &numofconversions);
        printf("num of units to convert = %d\n", numofconversions);

        // create 4 if statements in a loop to find out what unit to convert tosl
        for(int i = 0; i < numofconversions; i++) {
            double numtoconvert, outputnum;
            char scanned_unit = '\0';
            scanf("%lf %c", &numtoconvert, &scanned_unit);
            printf("numtoconvert[i] = %lf, scanned_unit = %c\n", numtoconvert, scanned_unit);

            // convert each unit inside if statement
            // when printing, print converted_unit and then the changed unit
            if(scanned_unit == 'g') {
                printf("changed_unit = lbs\n");
                outputnum = numtoconvert * 0.002205;
                printf("%lf lbs\n", outputnum);
            } else if(scanned_unit == 'm') {
                printf("changed_unit = ft\n");
                outputnum = numtoconvert * 3.2808;
                printf("%lf ft\n", outputnum);
            } else if(scanned_unit == 'c') {
                printf("changed_unit = f\n");
                outputnum = numtoconvert * 1.8 + 32;
                printf("%lf f\n", outputnum);
            }
            else {
                printf("changed_unit = no change; unit is not convertible\n");
            }
        }
    }