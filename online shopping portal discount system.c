#include<stdio.h>

int main(){
    int membership;
    float amount, finalAmount;
    
    scanf("%d",&membership);
    scanf("%d",&amount);
    
    if(membership == 1){
        if(amount >= 100)
            finalAmount = amount - (amount * 0.20);
        else
            finalAmount = amount - (amount * 0.10);
            
        printf("%.2f",finalAmount);
    }
    else if(membership == 0){
        printf("%.2f",amount);
    }
    else{
        printf("Invalid Member Details");
    }
    return 0;
}