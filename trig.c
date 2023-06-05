#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159
#endif

int main()
{
	const float amplitude=70;
	const float wavelength=0.1;
	float graph,s,x,lastvalue;
	
	for(graph=0;graph < 2*M_PI;graph+=wavelength)
	{
		s = amplitude*sin(graph);
		for(x=0; x<s + amplitude; x++)
		{
			putchar(' ');
			lastvalue = x;
		}
//		printf("lastvalue = %f and x = %f", lastvalue, x);
		if(lastvalue == x-1)
		{
			putchar('*');
		}
			
		putchar('\n');
	}
	return(0);
}
