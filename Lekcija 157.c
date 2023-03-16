#include <stdio.h>
int main ()

{

    int br;
    int i;

    printf("Unesi broj: \n");
    scanf ("%d",&br);


    for (i=1;i<=br;i++) //Da trazi neparne brojeve bilo bi i+2 umesto i++.
        {

        printf ("%d",i);
    }
    return 0;





}
