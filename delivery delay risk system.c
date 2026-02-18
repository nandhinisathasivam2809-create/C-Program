#include <stdio.h>

int main() {
    int N, delay;
    int totalDelay = 0, delayedCount = 0;

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &delay);
        totalDelay += delay;

        if(delay > 30) {
            delayedCount++;
        }
    }

    printf("Total Delay: %d\n", totalDelay);
    printf("Delayed Deliveries: %d\n", delayedCount);

    return 0;
}