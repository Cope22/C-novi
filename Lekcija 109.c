#include <stdio.h>

int main()
{
    int x, y;
    printf("Unesi x i y: ");
    scanf("%d%d", &x, &y);

    if (x > 0 && y > 0)
        printf("(%d, %d) nalazi se u prvom kvadrantu\n", x, y);
    else if (x < 0 && y < 0)
        printf("(%d, %d) nalazi se u drugom kvadrantu\n", x, y);
    else if (x > 0 && y < 0)
        printf("(%d, %d) nalazi se u trecem kvadrantu\n", x, y);
    else if (x < 0 && y > 0)
        printf("(%d, %d) nalazi se u cetvrtom kvadrantu\n", x, y);
    else
        printf("The point is located at the center of (0,0)\n");

	return 0;
}

// Prvi kvadrant oba pozitivna, drugi oba negativna, treci x pozitivan y negativan, cetvrti y pozitivan x negativan
