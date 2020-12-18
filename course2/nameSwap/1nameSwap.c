#include <stdio.h>
int main(void) {
    // declare nessasary variables
    int numNames = 0;
    char firstname[101];
    char lastname[101];

    // scanf number of names
    scanf("%d", &numNames);     

    // scanf the words and printf the words in opposite order
    for(int i = 0; i < numNames; i++) {
        scanf("%s %s", firstname, lastname);
        printf("\n");
        printf("%s %s", lastname, firstname);
    }
}