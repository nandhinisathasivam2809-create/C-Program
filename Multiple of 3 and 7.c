#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%3==0 && a%7==0){
        printf("Multiple of both 3 and 7");
    }
    else{
        printf("Not Multiple of both 3 and 7");
    }
   return 0;
}