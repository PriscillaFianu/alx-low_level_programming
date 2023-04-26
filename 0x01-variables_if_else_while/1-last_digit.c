#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n;
	int ld;

	srand(time(0));
	switch (rand() % 3) {
	case 0:
	n = 98;
	break;
	case 1:
	n = -98;
	break;
	case 2:
	n = 980;
	break;
	default:
	n = 0; // default case in case rand() generates a value outside 0-2
	break;
	}
	ld = abs(n) % 10; // use absolute value to get the last digit

	printf("n = %d\n", n); // debugging statement
	printf("last digit of %d is %d ", n, ld);

	if (ld > 5)
	{
	printf("and is greater than 5\n");
	}
	else if (ld == 0)
	{
	printf("and is 0\n");
	}
	else
	{
	printf("and is less than 6 and not 0\n");
	}
	return 0;
}

