#include <stdio.h>

int main() {
    int N, i, errors;
    int total = 0, critical = 0;

    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        scanf("%d", &errors);
        total += errors;

        if(errors > 50)
            critical++;
    }

    printf("Total Errors: %d\n", total);
    printf("Critical Hours: %d\n", critical);

    return 0;
}