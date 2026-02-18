#include <stdio.h>

int main() {
    int N, hours;
    int totalHours = 0, heavyDays = 0;
    int overtimeCost;

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &hours);
        totalHours += hours;

        if(hours > 3) {
            heavyDays++;
        }
    }

    overtimeCost = totalHours * 200;

    printf("Total Overtime Hours: %d\n", totalHours);
    printf("Overtime Cost: %d\n", overtimeCost);
    printf("Heavy Overtime Days: %d\n", heavyDays);

    return 0;
}