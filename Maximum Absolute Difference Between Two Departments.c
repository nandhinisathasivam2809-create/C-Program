#include <stdio.h>
#include <stdlib.h>

int main(){
    int R,C;
    scanf("%d%d",&R,&C);
    int a[R][C];

    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);

    int maxDiff=0;

    for(int r1=0;r1<R;r1++){
        for(int c1=0;c1<C;c1++){
            for(int r2=r1+1;r2<R;r2++){
                for(int c2=0;c2<C;c2++){
                    int d=abs(a[r1][c1]-a[r2][c2]);
                    if(d>maxDiff)
                        maxDiff=d;
                }
            }
        }
    }

    printf("%d",maxDiff);
}
