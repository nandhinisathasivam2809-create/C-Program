#include<stdio.h>
int main(){
    int M,N,sum=0;
    scanf("%d%d",&M,&N);
    for(int i=1;i<=N;i++){
        if(i%M==0){
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}
