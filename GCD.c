#include<stdio.h>
int main(){
    int A,B,i, gcd = 1,min;
    scanf("%d %d",&A, &B);
    if(A < B)
        min = A;
    else
        min = B;
        
    for(i=1;i<=min;i++){
        if(A % i == 0 && B % i == 0){
            gcd = i;
        }
    }
    printf("%d",gcd);
    return 0;
}