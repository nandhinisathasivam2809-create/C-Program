#include <stdio.h>
int main()
{
    int mark;
    scanf("%d",&mark);
    if(mark<=100 && mark>=90){
        printf("grade A");
    }
    else if(mark<90 && mark>=75){
        printf("grade B");
    }
    else if(mark<75 && mark>=50){
        printf("grade C");
    }
    else
        printf("Fail");
   return 0;
}