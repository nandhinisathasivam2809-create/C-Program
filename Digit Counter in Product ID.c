#include <stdio.h>

int main() {
    char str[100];
    int i = 0, count = 0;

    scanf("%s", str);

    while(str[i] != '\0') {
        if(str[i] >= '0' && str[i] <= '9')
            count++;

        i++;
    }

    printf("%d", count);

    return 0;
}