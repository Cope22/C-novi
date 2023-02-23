//Write a program that reads from the user a "three-digit" integer value.
//The program should print "ASCENDING" if the three digits of the number are in ascending order (from left to right).
//If not, the program should print "NOT ASCENDING".


#include <stdio.h>

int main()
{
	int num;
	int j, d, s;
	printf("Unesi trocifreni broj: ");
	scanf("%d", &num);

	j = num % 10;
	d = (num / 10) % 10;
	s = num / 100;

	if (s < d && d < j)
		printf("ASCENDING\n");
	else
		printf("NOT ASCENDING\n");

	return 0;
}


