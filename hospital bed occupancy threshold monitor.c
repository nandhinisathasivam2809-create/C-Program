#include <stdio.h>

int main() {
    int capacity, N;
    scanf("%d%d", &capacity, &N);

    int change, occupied = 0, critical = 0, i = 0;

    while(i < N) {
        scanf("%d", &change);
        occupied += change;
        if(occupied > 0.9 * capacity)
            critical++;
        i++;
    }

    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d\n", critical);

    return 0;
}