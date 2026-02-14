#include<stdio.h>
int main(){
    int a,count=0,n;
    scanf("%d",&n);
    for(;n!=0;n=n/10){
        a=n%10;
        if(a%2==0){
            count++;
        }
    }
    printf("%d",count);
}
