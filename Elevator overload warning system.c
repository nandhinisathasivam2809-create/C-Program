#include <stdio.h>
int main() {
    int maxWeight, N;
    scanf("%d%d", &maxWeight, &N);
    int weight, total = 0, count = 0, i = 0;
    while(i < N) {
        scanf("%d", &weight);
        if(total + weight > maxWeight)
            break;
        total += weight;
        count++;
        i++;
    }

    printf("Passengers Allowed: %d\n", count);
    printf("Overload: %s\n", (count < N) ? "Yes" : "No");

    return 0;
}