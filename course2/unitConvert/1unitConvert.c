    #include <stdio.h>
    int main(void) {
        // scan all the inputs includig the label
        int numofconversions = 0;
        scanf("%d", &numofconversions);
        printf("num of units to convert = %d\n", numofconversions);

        // create 4 if statements in a loop to find out what unit to convert tosl
        double numtoconvert[51];
        char scanned_unit[5];
        for(int i = 0; i < numofconversions; i++) {
            scanf("%lf %s", &numtoconvert[i], scanned_unit);
        }
            // char changed_unit[5];
            for(int i = 0; i < numofconversions; i++) {
                if(scanned_unit[i] == 'g') {
                    printf("changed_unit = lbs\n");
                } else if(scanned_unit[i] == 'm') {
                    printf("changed_unit = ft\n");
                } else if(scanned_unit[i] == 'c') {
                    printf("changed_unit = f");
                }
                printf("numtoconvert = %.2lf, scanned_unit = %s\n", numtoconvert[i], scanned_unit);
            }
        // convert each unit inside if statement
        // when printing, print converted_unit and then the changed unit
    }