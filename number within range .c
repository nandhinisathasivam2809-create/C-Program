#include <stdio.h>
int main()
{
    int range;
    scanf("%d",&range);
    if(range>=10 && range<=20){
        printf("Number is within range");
    }
    else 
        printf("Number is without range");
   return 0;
}