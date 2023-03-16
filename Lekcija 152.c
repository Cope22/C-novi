#include <stdio.h>

int main ()

{
    int ocena;
    int brojOcena=0;
    int zbirOcena=0;

    printf ("Unesi ocene, ukucaj '-1' kada zelis da prestanes: \n");
    scanf ("%d",&ocena);

    while (ocena !=-1)
    {

    zbirOcena = zbirOcena + ocena;

    brojOcena++;

    scanf ("%d",&ocena);

    }


    printf ("Broj unetih ocena je %d: \n", brojOcena);
    printf ("Prosecna ocena je %f \n", (float)zbirOcena / brojOcena);

    return 0;

}

