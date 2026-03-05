#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int X;
    scanf("%d",&X);
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == X){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}