#include <stdio.h>

int main()
{
    int num;
    printf("Unesite broj: ");
    scanf("%d", &num); 

    if (num >= 10 && num <= 99)
        printf("Broj je dvocifren\n");
    else if (num >= 100 && num <= 999)
        printf("Broj je trocifren\n");
    else
        printf("Broj nije ni dvocifren ni trocifren.'\n");
    return 0;
}
