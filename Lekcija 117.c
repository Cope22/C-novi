#include <stdio.h>

int main()
{
    int godina;

    printf("Unesi godinu: ");
    scanf("%d", &godina);

    if (godina<0)
        printf("Greska!\n"); //Dodao iz zabave

    else if (godina % 4 == 0 && godina % 100 != 0)

        printf("%d je prestupna godina.", godina);

    else
        printf("%d nije prestupna godina.", godina);



    return 0;
}



