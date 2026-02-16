#include<stdio.h>

int main(){
    int N,digit,decimal = 0,base = 1,i;
    scanf("%d",&N);
    for(i = N; i > 0; i = i/10){
        digit = i % 10;
        decimal = decimal + (digit * base);
        base = base*2;
    }
    printf("%d",decimal);
    return 0;
}