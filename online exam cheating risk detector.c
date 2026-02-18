#include <stdio.h>

int main() {
    int N, score;
    int totalRisk = 0, highRiskCount = 0;

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &score);
        totalRisk += score;

        if(score > 50) {
            highRiskCount++;
        }
    }

    printf("Total Risk: %d\n", totalRisk);
    printf("High Risk Sessions: %d\n", highRiskCount);

    return 0;
}