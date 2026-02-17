#include <stdio.h>
int main()
{
    int N, i;
    int expense;
    int total = 0;
    int overspendDays = 0;
    scanf("%d",&N);
    for (i = 0;i<N;i++){
        scanf("%d",&expense);
        total += expense;
        if(expense > 1000){
            overspendDays++;
        }
    }
    printf("Total Expense: %d\n",total);
    printf("Overspend Days:%d\n",overspendDays);
    return 0;
}