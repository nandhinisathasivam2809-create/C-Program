#include <stdio.h>

int main() {
    int N, i, voltage;
    int minVoltage, lowCount = 0;

    scanf("%d", &N);

    scanf("%d", &voltage);
    minVoltage = voltage;

    if(voltage < 210)
        lowCount++;

    for(i = 1; i < N; i++) {
        scanf("%d", &voltage);

        if(voltage < minVoltage)
            minVoltage = voltage;

        if(voltage < 210)
            lowCount++;
    }

    printf("Minimum Voltage: %d\n", minVoltage);
    printf("Low Voltage Events: %d\n", lowCount);

    return 0;
}