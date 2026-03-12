#include <stdio.h>

int main() {
    char str[100];
    int i = 0, flag = 0;

    scanf("%s", str);

    while(str[i] != '\0') {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}
