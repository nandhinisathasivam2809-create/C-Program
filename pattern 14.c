#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf("  ");
            }
            for(int k=1;k<=i;k++){
                printf("* ");
            }
            for(int k=i-1;k>=1;k--){
                printf("* ");
            }  
        printf("\n");
    }
    return 0;
}