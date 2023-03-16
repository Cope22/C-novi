#include <stdio.h>
//Korisnik unosi broj, program izbacuje kvadrat i kub tog broja
//*int main ()
//{
    //int a;
    //printf ("Unesi broj:");
    //scanf("%d",&a);
    //printf ("a^2= %d \n\n", a*a);
    //printf("a^3= %d \n", a*a*a);
    //return 0;

//}

int main ()

{
    int br;
    int step;
    printf ("Unesi broj:");
    scanf ("%d",&br);
    printf ("Unesi stepen: ");
    scanf("%d", &step);
    printf("br^step = %d:", br^step); // Ne moze.
    return 0;



}

