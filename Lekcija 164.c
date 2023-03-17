#include <stdio.h>


int main()
{
    int i, j;
    int n;

    printf("Unesi n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        j = i;
        while (j > 0)
        {
            printf("%d ", i);
            j--;
        }
        printf("\n");
    }
    return 0;
}
