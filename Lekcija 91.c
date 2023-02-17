#include <stdio.h>

int main ()


{
    float a,b;
    printf ("Unesite vrednost a: \n");
    scanf ("%f",&a);
    printf ("Unesite vrednost b: \n ");
    scanf ("%f",&b);
    if (a > b)
    {


        printf ("max=%.0f \n", a);
        printf ("min=%.0f \n", b);
    }

    else
    {


        printf ("max=%.0f \n", b);
        printf ("min=%.0f \n", a);

    }
        return 0;


}
