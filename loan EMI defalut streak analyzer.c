#include <stdio.h>
int main() {
    int N, i = 0;
    scanf("%d", &N);

    int pay[N], streak = 0, maxStreak = 0;

    while(i < N) {
        scanf("%d", &pay[i]);
        if(pay[i] == 0) {
            streak++;
            if(streak > maxStreak)
                maxStreak = streak;
        } else {
            streak = 0;
        }
        i++;
    }

    printf("Longest Default Streak: %d\n", maxStreak);
    return 0;
}