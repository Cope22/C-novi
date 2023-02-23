//Write a program that reads from the user 3 values of an "integer" type.
//The program should print "EQUAL" if all the values are equal. Otherwise, the program should print "NOT EQUAL".

#include <stdio.h>
int main ()
{
    int a;
    int b;
    int c;
    printf ("Unesi vrednost a: \n");
    scanf ("%d",&a);
    printf ("Unesi vrednost b: \n");
    scanf ("%d",&b);
    printf ("Unesi vrednost c: \n");
    scanf ("%d",&c);

    if (a==b && b==c)
        printf ("EQUAL \n");
    else printf("NOT EQUAL \n");

    return 0;



}
