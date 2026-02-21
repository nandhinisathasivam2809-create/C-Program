#include <stdio.h>

int main() {
    int N, i = 0, max = 0, surge = 0;
    scanf("%d", &N);

    int power;

    while(i < N) {
        scanf("%d", &power);
        if(power > max)
            max = power;
        if(power > 5)
            surge++;
        i++;
    }

    printf("Max Usage: %d\n", max);
    printf("Surge Hours: %d\n", surge);

    return 0;
}