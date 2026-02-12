#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=18){
        printf("Eligible to vote");
    }
    else{
        printf("Not Eligible to vote");
    }
   return 0;
}