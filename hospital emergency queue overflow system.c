#include <stdio.h>

int main() {
    int maxCapacity, N;
    scanf("%d", &maxCapacity);
    scanf("%d", &N);

    int patients[N];
    int i = 0;
    int treated = 0;
    int rejected = 0;

    while(i < N) {
        scanf("%d", &patients[i]);

        if(treated + patients[i] <= maxCapacity) {
            treated += patients[i];
        } else {
            rejected += (treated + patients[i] - maxCapacity);
            treated = maxCapacity;
        }

        i++;
    }

    printf("Treated Patients: %d\n", treated);
    printf("Rejected Patients: %d\n", rejected);

    return 0;
}