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

    int highValueCount = 0;
    int consecutiveHigh = 0;
    int fraudAttempt = -1;

    i = 0;

    while(i < N) {
        if(arr[i] >= 50000) {
            highValueCount++;
            consecutiveHigh++;

            if(consecutiveHigh == 3 && fraudAttempt == -1) {
                fraudAttempt = i + 1;
            }
        } else {
            consecutiveHigh = 0;
        }
        i++;
    }

    if(fraudAttempt != -1)
        printf("Fraud Triggered At Attempt: %d\n", fraudAttempt);
    else
        printf("Fraud Triggered At Attempt: Not Triggered\n");

    printf("High-Value Transactions: %d\n", highValueCount);

    return 0;
}