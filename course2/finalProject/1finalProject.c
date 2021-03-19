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

    int swap = 0;
    for(int i = 0; i < numStudents; i++) {
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
    }

    // printf("studentScores == %d\n", studentScores[i]);
    int studentRank[51];
    for(int i = 0; i < numStudents; i++) {
        if(studentScores[i + 1] == 0) {
            break;
        }
        
        if(studentScores[i] > studentScores[i + 1]) {
            studentRank[i] = 1;
        } else {
            studentRank[i] = numStudents + 1;
        }
    }
    
    // print the scores
    char studentName[51];
    for(int i = 0; i < numStudents; i++) {
        scanf("%s", studentName);
        printf("%s score is %d\n", studentName, studentScores[i]);
    }
}