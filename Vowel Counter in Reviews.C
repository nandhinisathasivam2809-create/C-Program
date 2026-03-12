#include <stdio.h>

int main() {
    char str[100];
    int i = 0, count = 0;

    scanf("%s", str);

    while(str[i] != '\0') {
        char c = str[i];

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
           c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            count++;

        i++;
    }

    printf("%d", count);

    return 0;
}
