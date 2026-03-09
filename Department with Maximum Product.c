#include <stdio.h>

int main(){
    int R,C;
    scanf("%d%d",&R,&C);
    int a[R][C];

    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);

    long maxProd=-999999,index=0;

    for(int i=0;i<R;i++){
        long prod=1;

        for(int j=0;j<C;j++)
            prod*=a[i][j];

        if(prod>maxProd){
            maxProd=prod;
            index=i;
        }
    }

    printf("%d",index);
}
