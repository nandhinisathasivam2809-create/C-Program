#include<stdio.h>
int main(){
    int N,i;
    int total = 0;
    int amount;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&amount);
        total+=amount;
    }
        if(total<=10000){
            printf("Approved");
        }
        else{
            printf("Limit Exceeded");
        }
    return 0;
}