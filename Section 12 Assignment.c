//Write a program that reads from the user 2 values of an "integer" type.
//The program should print "EQUAL" if both the values are equal. Otherwise, the program should print "NOT EQUAL".


#include <stdio.h>

int main()
{
	int a, b;
	printf("Unesi prvu vrednost: ");
	scanf("%d", &a);
	printf("Unesi drugu vrednost: ");
	scanf("%d", &b);

	if (a == b)
		printf("EQUAL\n");
	else
		printf("NOT EQUAL\n");

	return 0;
}
