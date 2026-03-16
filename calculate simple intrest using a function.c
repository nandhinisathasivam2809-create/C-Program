#include <stdio.h>

float calculateSI(int p, int r, int t)
{
    float si;
    si = (p * r * t) / 100.0;
    return si;
}

int main()
{
    int p, r, t;
    float result;

    scanf("%d %d %d", &p, &r, &t);

    result = calculateSI(p, r, t);

    printf("%.2f", result);

    return 0;
}