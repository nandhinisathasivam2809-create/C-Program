#include <stdio.h>
int main() {
    int N, loss;
    int totalLoss = 0, highLossDays = 0;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &loss);
        totalLoss += loss;

        if(loss > 100) {
            highLossDays++;
        }
    }

    printf("Total Loss: %d\n", totalLoss);
    printf("High Loss Days: %d", highLossDays);

    return 0;
}