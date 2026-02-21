#include <stdio.h>

int main() {
    int cash, N;
    scanf("%d%d", &cash, &N);

    int withdraw, success = 0, i = 0;

    while(i < N) {
        scanf("%d", &withdraw);
        if(cash < withdraw)
            break;
        cash -= withdraw;
        success++;
        i++;
    }

    printf("Successful Withdrawals: %d\n", success);
    printf("Remaining Cash: %d\n", cash);

    return 0;
}