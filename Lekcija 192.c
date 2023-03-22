#include <stdio.h>


float prosOcena (int ocena1, int ocena2, int ocena3)
{
    float avg;
    avg=(ocena1+ocena2+ocena3)/3.0;
    return avg;

}


int main ()
{
   int o1,o2,o3;
   printf ("Unesite 3 ocene:\n ");
   scanf ("%d%d%d",&o1,&o2,&o3);
   printf ("Prosek = %f \n", prosOcena(o1,o2,o3));
   return 0;




}
