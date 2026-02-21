#include <stdio.h>

int main() {
    int N, i = 0;
    scanf("%d", &N);

    int order, success = 0, cancel = 0;

    while(i < N) {
        scanf("%d", &order);

        if(order == 1)
            success++;
        else
            cancel++;

        i++;
    }

    printf("Successful: %d\n", success);
    printf("Cancelled: %d\n", cancel);

    if(cancel > success)
        printf("Status: Risk\n");
    else
        printf("Status: Safe\n");

    return 0;
}