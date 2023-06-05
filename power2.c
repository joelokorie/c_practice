#include <stdio.h>
#include <math.h>

int main()
{
	const int value = 2;
	
	int counter;

	for(counter = 0; counter <= 393; counter++)
	{
		printf("The value of 2 raised to the power of %d is %lf\n ", counter,pow(value,counter));
	}

	putchar('\n');
	return (0);
}
