
#include <stdio.h>
int main()
{
	int a, b;
	printf("Unesi neka dva broja:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	if (a > b)
		printf("max = %d\n", a);
	else
		printf("max %d\n", b);
	return 0;
}
