#include <stdio.h>

int main() {
    int walletBalance, N;
    scanf("%d", &walletBalance);
    scanf("%d", &N);

    int amount[N];
    int i = 0;
    int successfulPurchases = 0;

    while(i < N) {
        scanf("%d", &amount[i]);

        if(walletBalance < amount[i]) {
            break;
        }

        walletBalance -= amount[i];
        successfulPurchases++;
        i++;
    }

    printf("Successful Purchases: %d\n", successfulPurchases);
    printf("Final Balance: %d\n", walletBalance);

    return 0;
}