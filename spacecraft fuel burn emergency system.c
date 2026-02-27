#include <stdio.h>

int main() {
    int fuel, N;
    scanf("%d", &fuel);
    scanf("%d", &N);

    int burn[N];
    int i = 0;

    while(i < N) {
        scanf("%d", &burn[i]);
        i++;
    }

    int emergencyStage = -1;
    int fuelWasted = 0;

    i = 0;

    while(i < N) {
        fuel -= burn[i];

        if(fuel < 0 && emergencyStage == -1) {
            emergencyStage = i + 1;
            fuelWasted = -fuel;
        }
        i++;
    }

    if(emergencyStage != -1)
        printf("Emergency Stage: %d\n", emergencyStage);
    else
        printf("Emergency Stage: Not Occurred\n");

    printf("Fuel Wasted: %d\n", fuelWasted);

    return 0;
}