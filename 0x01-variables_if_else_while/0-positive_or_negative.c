#include <stdlib.h>
#include <time.h>
/* Random positive and neagtive numbers */

/* main: Entry point */

int main (void)
{
	int n;

	srand(time(0));
	n = rand() -RAND_MAX / 2;
	printf("%d \n", n);
	return (0);
}
