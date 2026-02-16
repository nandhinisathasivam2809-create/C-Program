#include<stdio.h>

int main(){
    int N, temp,digit,count=0;
    int sum = 0,power,i;
    scanf("%d",&N);
    temp =N;
    for(; temp>0;temp = temp/10){
        count++;
    }
    temp = N;
    for(; temp>0;temp = temp/10){
        digit = temp % 10;
        power = 1;
        for(i=1;i<=count;i++){
            power = power * digit;
        }
        sum = sum + power;
    }
    if(sum == N)
        printf("yes");
    else
        printf("No");
    return 0;
}