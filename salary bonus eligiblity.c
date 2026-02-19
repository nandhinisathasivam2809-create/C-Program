#include <stdio.h>
int main()
{
    int  bonus;
    scanf("%d",&bonus);
    if(bonus>30000){
        printf("Bonus Eligible");
    }else{
        printf("Not Eligible");
    }
    return 0;
}