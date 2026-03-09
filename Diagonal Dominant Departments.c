#include <stdio.h>

int main(){
    int R,C,count=0;
    scanf("%d%d",&R,&C);
    int a[R][C];

    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<R;i++){
        int sum=0;
        for(int j=0;j<C;j++){
            if(j!=i)
                sum+=a[i][j];
        }

        if(a[i][i] > sum)
            count++;
    }

    printf("%d",count);
}
