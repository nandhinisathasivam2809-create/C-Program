#include <stdio.h>
int main() {
    int N, i = 0;
    scanf("%d", &N);
    int status[N];
    while(i < N) {
        scanf("%d", &status[i]);
        i++;
    }
    int streak = 0, maxStreak = 0;
    i = 0;
    while(i < N) {
        if(status[i] == 0) {
            streak++;
            if(streak > maxStreak)
                maxStreak = streak;
        } else {
            streak = 0;
        }
        i++;
    }

    printf("Longest Failure Streak: %d\n", maxStreak);

    return 0;
}