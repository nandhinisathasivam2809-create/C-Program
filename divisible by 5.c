#include<stdio.h> 
int main(){
    int a;
    scanf("%d",&a);
    if(a%5==0){
        printf("Divisible by 5");
    }else{
        printf("Not divisible by 5");
    }
    return 0;
}