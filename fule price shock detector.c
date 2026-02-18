#include <stdio.h>
int main() {
    int N, i;
    int price;
    int highest;
    int highDays = 0;
    scanf("%d", &N);
    scanf("%d", &price);
    highest = price;
    if(price > 100) {
        highDays++;
    }
    for(i = 1; i < N; i++) {
        scanf("%d", &price);

        if(price > highest) {
            highest = price;
        }

        if(price > 100) {
            highDays++;
        }
    }
    printf("Highest Price: %d\n", highest);
    printf("High Price Days: %d\n", highDays);

    return 0;
}