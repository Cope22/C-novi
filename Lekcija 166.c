#include <stdio.h>


int main()
{
    int i;
    int mil = 1000000;
    float suma = 0.01;

    for (i = 1; i <= 30; i++)
    {
        printf("Dan %d: Ukupna suma %.2f\n", i, suma);
        suma = suma * 2;
    }

    printf("Ukupna suma posle 30 dana iznosi: %f \n", suma);

    return 0;
}
