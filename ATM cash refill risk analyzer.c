#include <stdio.h>

int main() {
    int initialCash, N;
    int withdrawal, riskCount = 0;

    scanf("%d", &initialCash);
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &withdrawal);
        initialCash -= withdrawal;

        if(initialCash < 5000) {
            riskCount++;
        }
    }

    printf("Remaining Cash: %d\n", initialCash);
    printf("Risk Count: %d\n", riskCount);

    return 0;
}