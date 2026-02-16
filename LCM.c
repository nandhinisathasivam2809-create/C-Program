#include<stdio.h>
int main(){
    int A,B,i,max,lcm;
    scanf("%d %d",&A, &B);
    if(A > B)
        max = A;
    else
        max = B;
        
    for(i=max;i<=A*B;i++){
        if(i % A == 0 && i % B == 0){
            lcm = i;
            break;
        }
    }
    printf("%d",lcm);
    return 0;
}