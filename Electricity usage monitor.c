#include<stdio.h>
int main(){
    int N,i;
    int unit;
    int totalUnit = 0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&unit);
        totalUnit+=unit;
    }
        printf("total Unit:%d",totalUnit);
    
    return 0;
}