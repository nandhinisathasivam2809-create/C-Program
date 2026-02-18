#include <stdio.h>

int main() {
    int N, mark;
    int sum = 0, failedSubjects = 0;
    int average;

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &mark);
        sum += mark;

        if(mark < 40) {
            failedSubjects++;
        }
    }

    average = sum / N;

    printf("Average Score: %d\n", average);
    printf("Failed Subjects: %d", failedSubjects);

    return 0;
}