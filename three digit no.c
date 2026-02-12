#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=100 && a<=999){
        printf("Three digit nuamber");
    }
    else{
        printf("Not a Three digit numbe");
    }
   return 0;
}