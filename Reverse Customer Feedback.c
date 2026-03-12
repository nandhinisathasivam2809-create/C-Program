#include <stdio.h>

int main() {
    char str[100];
    int i = 0, len = 0;

    scanf("%s", str);

    while(str[i] != '\0') {
        len++;
        i++;
    }

    for(i = len-1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}