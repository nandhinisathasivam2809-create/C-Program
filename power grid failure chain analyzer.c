#include <stdio.h>

int main() {
    int capacity, N;

    scanf("%d", &capacity);
    scanf("%d", &N);

    int load[N];

    int i = 0;
    while(i < N) {
        scanf("%d", &load[i]);
        i++;
    }

    int safeHours = 0;
    int failureCount = 0;
    i = 0;

    while(i < N) {
        if(load[i] > capacity) {
            failureCount++;
        } else {
            safeHours++;
        }
        i++;
    }

    printf("Safe Hours: %d\n", safeHours);
    printf("Failure Count: %d\n", failureCount);

    return 0;
}