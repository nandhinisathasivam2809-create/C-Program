#include <stdio.h>
int main()
{
    int batterypercent,N;
    int drain,i;
    scanf("%d",&batterypercent);
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&drain);
        batterypercent -= drain;
    }
    printf("remaining battery: %d%%",batterypercent);
    return 0;
}