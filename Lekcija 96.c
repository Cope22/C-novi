#include <stdio.h>
int main()
{
    int i;

    printf("Get grade from user: ");
    scanf("%d",&i);

    if (i>=80)
        printf("Excellent job! \n");
    else if (i>=60)
        printf ("Not bad \n");
        else
        printf("Oh you didn't pass... \n");
        return 0;




}
