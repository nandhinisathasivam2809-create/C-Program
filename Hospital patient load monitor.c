#include<stdio.h>
int main() {
    int N, i;
    int patients;
    int total = 0;
    int overcrowded = 0;

    
    scanf("%d", &N);

    
    for(i = 0; i < N; i++) {
        scanf("%d", &patients);
        total += patients;

        if(patients > 100) {
            overcrowded++;
        }
    }

    
    printf("Total Patients: %d\n", total);
    printf("Overcrowded Days: %d\n", overcrowded);

    return 0;
}