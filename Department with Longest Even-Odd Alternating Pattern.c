#include <stdio.h>

int main(){
    int R,C,index=0,maxLen=0;
    scanf("%d%d",&R,&C);
    int a[R][C];

    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<R;i++){
        int len=1;

        for(int j=1;j<C;j++){
            if((a[i][j]%2)!=(a[i][j-1]%2))
                len++;
        }

        if(len>maxLen){
            maxLen=len;
            index=i;
        }
    }

    printf("%d",index);
}
