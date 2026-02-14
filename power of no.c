#include<stdio.h>
int main(){
    int base,power,result = 1;
    scanf("%d%d",&base,&power);
    if(power==0){
        printf("1");
    }
    else{
        for(int i=1;i<=power;i++){
        result*=base;
        }
        printf("%d",result);
    }
    return 0;
}