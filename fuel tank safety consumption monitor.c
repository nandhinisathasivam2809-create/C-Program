#include <stdio.h>
int main() {
    int fuel, N;
    scanf("%d%d", &fuel, &N);

    int use, trips = 0, i = 0;

    while(i < N) {
        scanf("%d", &use);
        if(fuel < use)
            break;
        fuel -= use;
        trips++;
        i++;
    }

    printf("Completed Trips: %d\n", trips);
    printf("Remaining Fuel: %d\n", fuel);

    return 0;
}