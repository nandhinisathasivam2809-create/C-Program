#include <stdio.h>
int main()
{
    int  temp;
    scanf("%d",&temp);
    if(temp<=20){
        printf("Cold");
    }
    else if(temp>=30){
        printf("Hot");
    }
    else {
        printf("Normal");
    }
    return 0;
}