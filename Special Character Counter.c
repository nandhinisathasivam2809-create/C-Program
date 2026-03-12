#include <stdio.h>

int main() {
    char str[100];
    int i = 0, count = 0;

    scanf("%s", str);

    while(str[i] != '\0') {
        char c = str[i];

        if(!( (c>='A'&&c<='Z') ||
              (c>='a'&&c<='z') ||
              (c>='0'&&c<='9') ))
            count++;

        i++;
    }

    printf("%d", count);

    return 0;
}
