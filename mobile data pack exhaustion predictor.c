#include <stdio.h>

int main() {
    int dataPackGB, N;
    scanf("%d", &dataPackGB);
    scanf("%d", &N);

    int usage[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &usage[i]);
    }

    int day = 0;
    int exhaustedDay = -1;
    int overused = 0;

    while(day < N) {
        dataPackGB -= usage[day];

        if(dataPackGB <= 0) {
            exhaustedDay = day + 1;

            if(dataPackGB < 0)
                overused = -dataPackGB;
            else
                overused = 0;

            break;
        }

        day++;
    }

    if(exhaustedDay == -1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    } else {
        printf("Exhausted Day: %d\n", exhaustedDay);
        printf("Overused Data: %d\n", overused);
    }

    return 0;
}