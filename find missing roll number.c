#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n-1];
    int actualSum = 0;

    for(int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;

    int missing = expectedSum - actualSum;

    printf("%d", missing);

    return 0;
}