#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    int i = 0;

    
    while(i < N) {
        scanf("%d", &arr[i]);
        i++;
    }

    int congestionMinutes = 0;
    int currentStreak = 0;
    int longestStreak = 0;

    i = 0;

    
    while(i < N) {
        if(arr[i] > 20) {
            congestionMinutes++;
            currentStreak++;

            if(currentStreak > longestStreak) {
                longestStreak = currentStreak;
            }
        } else {
            currentStreak = 0;
        }
        i++;
    }

    printf("Congestion Minutes: %d\n", congestionMinutes);
    printf("Longest Congestion Streak: %d\n", longestStreak);

    return 0;
}