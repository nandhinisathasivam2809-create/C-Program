#include <stdio.h>
int main()
{
    int  length;
    scanf("%d",&length);
    if(length>=8){
        printf("Strong password");
    }else{
        printf("Weak password");
    }
    return 0;
}