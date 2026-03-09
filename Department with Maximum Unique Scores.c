#include <stdio.h>

int main(){
    int R,C;
    scanf("%d%d",&R,&C);
    int a[R][C];

    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);

    int maxUnique=0,index=0;

    for(int i=0;i<R;i++){
        int count=0;

        for(int j=0;j<C;j++){
            int unique=1;
            for(int k=0;k<C;k++){
                if(j!=k && a[i][j]==a[i][k]){
                    unique=0;
                    break;
                }
            }
            if(unique) count++;
        }

        if(count>maxUnique){
            maxUnique=count;
            index=i;
        }
    }

    printf("%d",index);
}