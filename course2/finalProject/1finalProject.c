#include <stdio.h>
int main(void) {
    // scan the num of students
    int numStudents = 0;
    scanf("%d", &numStudents);
    printf("numStudents = %d\n", numStudents);

    // create for loop to count scores
    int studentScores[51];
    for(int i = 0; i < numStudents; i++) {
        scanf("%d", &studentScores[i]);
        printf("studentScore[%d] = %d\n", i, studentScores[i]);
    }

    // create second for loop to count students
    char studentName[51];
    for(int i = 0; i < numStudents; i++) {
        scanf("%s", studentName);
        printf("studentName[%d] = %s\n", i, studentName);
    }

    // int studentRank[51];
    int swap = 0;
    // char charswap = '\0';
    for(int i = 0; i < numStudents; i++) {
        if(studentScores[i] > studentScores[i + 1]) {
            if(studentScores[i + 1] == 0) {
                break;
            }
            swap = studentScores[i + 1];
            studentScores[i + 1] = studentScores[i];
            studentScores[i] = swap;
        }
    }
        // if(studentScores[i] == swap) {
        //     charswap = studentName[i + 1];
        //     studentName[i + 1] = studentName[i];
        //     studentName[i] = charswap;
        // }

            // printf("studentScores == %d\n", studentScores[i]);

             // print the scores
             for(int i = 0; i < numStudents; i++) {
                printf("%s score is %d\n", studentName, studentScores[i]);
             }
}