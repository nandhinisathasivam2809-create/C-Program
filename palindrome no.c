#include<stdio.h>

int main(){
    int N, temp,rev = 0,digit;
    scanf("%d",&N);
    temp = N;
    for(; temp>0;temp = temp/10){
        digit = temp % 10;
        rev = rev*10+digit;
    }
    if(rev == N)
        printf("yes");
    else
        printf("No");
    return 0;
}