#include <stdio.h>

int main ()


{
    int br;
    int step;
    int i;
    int res=1;

    printf ("Unesi broj: ");
    scanf ("%d",&br);
    printf ("Unesi stepen broja: ");
    scanf ("%d", &step);

    for (i=1;i<=step;i++)

    {
        res=res*br;
    }

    printf ("%d^%d = %d",br,step,res);
    return 0;

}
