#include<stdio.h>
int main(){
    int totalData,N;
    int i = 0;
    int usage;
    int daysUsed = 0;
    scanf("%d",&totalData);
    scanf("%d",&N);
    while(i<N && totalData>0){
        scanf("%d",&usage);
        if(totalData - usage>=0){
            totalData = totalData - usage;
            daysUsed++;
        }else{
            totalData = 0;
            daysUsed++;
            break;
        }i++
    }
    printf("Days Used: %d\n",daysUsed);
    printf("Remaining data: %d\n",totalData);
    return 0;
}