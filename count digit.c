#include<stdio.h>

int main(){
    int n;
    printf("Enter the value:");
    scanf("%d",&n);
   
    int count = 0;
    
    for(; n!= 0;n/=10) {
        count++;
    }
    printf("%d\n",count);
    
    return 0;
}