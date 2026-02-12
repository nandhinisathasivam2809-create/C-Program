#include <stdio.h>
int main()
{
    int unit;
    int bill;
    scanf("%d",&unit);
    if(unit>=100)
        bill = unit * 5;
    else 
        bill = unit * 5;
    printf("Bill amount = Rs.%d",bill);
   return 0;
}