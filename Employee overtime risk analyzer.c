#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int hours[N];
    int i = 0;
    int totalOvertime = 0;
    int burnoutDays = 0;
    while(i < N) {
        scanf("%d", &hours[i]);
        totalOvertime += hours[i];
        if(hours[i] > 4) {
            burnoutDays++;
        }

        i++;
    }
    printf("Total Overtime: %d\n", totalOvertime);
    printf("Burnout Days: %d\n", burnoutDays);
    return 0;
}