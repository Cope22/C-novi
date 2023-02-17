#include <stdio.h>

int main()
{
    int a, b, c;
    int max, min;
    printf("Unesi prvi broj: ");
    scanf("%d", &a);
    printf("Unesi drugi broj: ");
    scanf("%d", &b);
    printf("Unesi treci broj: ");
    scanf("%d", &c);
    max = a;
    min = b;
    if (a < b)
    {
        max = b;
        min = a;
    }
    if (max < c)
        max = c;
    if (c < min)
        min = c;

    printf("Najveci broj je = %d\n", max);
    printf("Najmanji broj je = %d\n", min);

    return 0;
}
