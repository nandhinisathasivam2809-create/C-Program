#include <stdio.h>
int main() {
    int maxWeight, N;
    scanf("%d", &maxWeight);
    scanf("%d", &N);
    int weight[N];
    int i = 0;
    int totalWeight = 0;
    int peopleEntered = 0;
    int overload = 0;
    while(i < N) {
        scanf("%d", &weight[i]);
        if(totalWeight + weight[i] > maxWeight) {
            overload = 1;
            break;
        }
        totalWeight += weight[i];
        peopleEntered++;
        i++;
    }
    printf("People Entered: %d\n", peopleEntered);
    if(overload)
        printf("Overload Status: Yes\n");
    else
        printf("Overload Status: No\n");

    return 0;
}