#include <stdio.h>

int main() {
    int N, i = 0, total = 0, delayed = 0;
    scanf("%d", &N);

    int delay;

    while(i < N) {
        scanf("%d", &delay);
        total += delay;
        if(delay > 2)
            delayed++;
        i++;
    }

    printf("Total Delay: %d\n", total);
    printf("Delayed Days: %d\n", delayed);

    return 0;
}