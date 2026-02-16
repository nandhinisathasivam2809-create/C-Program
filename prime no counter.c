#include<stdio.h>

int main(){
    int N,i,j, count = 0, divisors;
    scanf("%d",&N);
    for(i = 2; i<=N; i++){
        divisors = 0;
        for(j = 1;j<=i;j++){
            if(i%j == 0){
                divisors++;
            }
        }
        if(divisors == 2){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}