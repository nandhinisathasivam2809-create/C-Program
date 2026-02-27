#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    int i = 0;

    while(i < N) {
        scanf("%d", &arr[i]);
        i++;
    }

    int unsafeCount = 0;
    int consecutiveUnsafe = 0;
    int breakdownAt = -1;

    i = 0;

    while(i < N) {
        if(arr[i] > 70) {
            unsafeCount++;
            consecutiveUnsafe++;

            if(consecutiveUnsafe == 3 && breakdownAt == -1) {
                breakdownAt = i + 1;
            }
        } else {
            consecutiveUnsafe = 0;
        }
        i++;
    }

    if(breakdownAt != -1)
        printf("Breakdown At Reading: %d\n", breakdownAt);
    else
        printf("Breakdown At Reading: Not Occurred\n");

    printf("Unsafe Readings: %d\n", unsafeCount);

    return 0;
}