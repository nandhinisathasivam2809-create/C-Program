#include<stdio.h> 
int main(){
    int a,b;
    scanf("%d %d",&a, &b);
    int q = a;
    int r = a;
    q /= b;
    r %= b;
    printf("%d %d", q, r);
    return 0;
}