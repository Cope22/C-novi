#include <stdio.h>

int main ()


{
    int ocena;

    do {
        printf ("Unesite ocenu od 0 do 100: ");
        scanf ("%d",&ocena);

    } while (ocena>100 || ocena<0);

    printf ("Uneli ste legitimnu ocenu %d ! \n",ocena);
    return 0;






}
