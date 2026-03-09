#include <stdio.h>

int main() {
    int R,C;
    scanf("%d%d",&R,&C);
    int a[R][C];

    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);

    int min=999999,index=-1;

    for(int i=0;i<R;i++){
        int sum=0;
        for(int j=0;j<C;j++)
            sum+=a[i][j];

        if(sum!=0 && sum<min){
            min=sum;
            index=i;
        }
    }

    printf("%d",index);
}
