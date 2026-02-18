#include <stdio.h>

int main() {
    int N, i, revenue;
    int total = 0, targetDays = 0;

    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        scanf("%d", &revenue);
        total += revenue;

        if(revenue > 50000)
            targetDays++;
    }

    printf("Total Revenue: %d\n", total);
    printf("Target Days: %d\n", targetDays);

    return 0;
}