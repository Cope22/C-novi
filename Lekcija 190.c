#include <stdio.h>

void printMaxMin (int num1, int num2)

{



    if (num1>num2)
{


    printf ("Maksimum je: %d\n",num1);
    printf ("Minimum je: %d\n",num2);
    }

    else {

        printf("Maksimum je: %d\n",num2);
        printf("Minimum je: %d\n",num1);
    }



}

int main ()



{

    int a,b;
    printf ("Unesite prvi broj:");
    scanf ("%d",&a);
    printf ("Unesite drugi broj:");
    scanf ("%d",&b);
    printMaxMin (a,b);
    return 0;



}
