#include<stdio.h>
int main(){
    int choice;
    int a,b;
    scanf("%d",&choice);
    switch(choice){
        case 1:
            scanf("%d%d",&a,&b);
            printf("sum = %d",a+b);
            break;
        case 2:
            scanf("%d%d",&a,&b);
            printf("sum = %d",a-b);
            break;
        case 3:
            scanf("%d%d",&a,&b);
            printf("sum = %d",a*b);
            break;
        case 4:
            scanf("%d%d",&a,&b);
            printf("sum = %d",a/b);
            break;
        default:
            printf("invalid choice");
    }
    return 0;
}