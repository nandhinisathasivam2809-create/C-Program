#include <stdio.h>

int main() {
    int N, rain;
    int totalRainfall = 0;
    int heavyDays = 0;

    
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &rain);
        totalRainfall += rain;

        if(rain > 50) {
            heavyDays++;
        }
    }
    printf("Total Rainfall: %d\n", totalRainfall);
    printf("Heavy Rain Days: %d", heavyDays);

    return 0;
}