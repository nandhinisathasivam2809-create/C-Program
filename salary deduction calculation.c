#include<stdio.h>
int main(){
    int i;
    int salary;
    int absentDays;
    scanf("%d",&salary);
    scanf("%d",&absentDays);
    for(i=1;i<absentDays;i++){
        salary=salary-100;
    }
        printf("Final salary =₹%d",salary);
    
    return 0;
}