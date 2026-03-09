#include <stdio.h>

int main(){
    int R,C,count=0;
    scanf("%d%d",&R,&C);
    int a[R][C];

    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<R;i++){
        int unique=1;

        for(int j=0;j<C;j++){
            for(int k=j+1;k<C;k++){
                if(a[i][j]==a[i][k]){
                    unique=0;
                    break;
                }
            }
        }

        if(unique)
            count++;
    }

    printf("%d",count);
}