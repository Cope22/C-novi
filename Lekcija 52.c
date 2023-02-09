#include <stdio.h>

int main()
{
	double visina, duzina;
	double povrsina;
	printf("Vrednost visine: ");
	scanf("%lf", &visina);
	printf("Vrednost duzine: ");
	scanf("%lf", &duzina);
	povrsina = visina * duzina;
	printf("Povrsina pravougaonika je = %lf\n", povrsina);
}
