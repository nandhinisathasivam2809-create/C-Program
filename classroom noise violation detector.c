#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int noise[N];
    int i=0;
    while(i<N){
        scanf("%d",&noise[i]);
        i++;
    }
    int violation = 0;
    int currentstreak = 0;
    int maxstreak = 0;
    i=0;
    while(i<N){
        if(noise[i]>70){
            violation++;
            currentstreak = 0;
            if (currentstreak > maxstreak){
                maxstreak = currentstreak;
            }
        }
        else{
            
            currentstreak = 0;
            }
            i++;
        }
        printf("Noise violation:%d\n",violation);
        printf("Largest violation streak:%d\n",maxstreak);
    
    return 0;
}
