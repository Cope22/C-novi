#include <stdio.h>

int main ()


{
    int br;
    int step;
    int i=1;
    //int tempStep

    printf("Unesi broj:");
    scanf ("%d",&br);
    printf ("Unesi stepen broja:");
    scanf ("%d",&step);
    //tempStep=step
    while (step>0)
    {


        i=i*br;
        step--;

        }

    printf ("%d na %d = %d \n", br,step,i); //tempStep umesto step, u printfu step je 0 umesto uneti broj

    return 0;


}
