#include <stdio.h>

int main()
{
    int brojzvezdica;
    int i = 1;

    printf("Unesi broj zvezdica: ");
    scanf("%d", &brojzvezdica);

    while (i <= brojzvezdica)
    {
        printf("*");
        i++;
    }

    return 0;
}
