#include <stdio.h>

int main ()

{

    int cenaProizvoda;
    int zbirProizvoda=0;

    printf("Unesi cene proizvoda: \n");


    do
        {
        scanf("%d",&cenaProizvoda);
        zbirProizvoda=zbirProizvoda+cenaProizvoda;
        } while(cenaProizvoda!=0);


    printf ("Ukupna cena racuna je %d: \n", zbirProizvoda);
    return 0;





}
