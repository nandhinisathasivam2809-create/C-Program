#include <stdio.h>
int main()
{
    int N,fare,total = 0;
    int drain,i;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&fare);
        total += fare;
    }
    printf("Total Collection:₹%d",total);
    return 0;
}