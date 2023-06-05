#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main()
{
	int amplitude = 30;
	int y;
	int i, x ;
	int numberofPoints = 30;

	for(i=0; i<=numberofPoints; i++)
	{
		double angle = ((2*PI)/numberofPoints)*i;
		y = amplitude * sin(angle);
		
		for( x = 0; x < y + amplitude; x++)
		{
			putchar(' ');
		}
		putchar('*');
		putchar('\n');

	}
	
	return (0);
	
}
