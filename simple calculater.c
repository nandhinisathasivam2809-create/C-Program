#include<stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d%c%d",&a,&op,&b);
    switch(op){
        case '+':
            printf("result = %d",a + b);
            break;
         case '-':
            printf("result = %d",a - b);
            break;
        case '*':
            printf("result = %d",a * b);
            break;
         case '/':
            printf("result = %d",a / b);
            break;
        default:
            printf("invalid operater");
            
    }
    return 0;
    
}