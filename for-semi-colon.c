#include <stdio.h>

int main ()
{
	int x;

	for(x=1;x<14;x=x+1);
	{
		puts("Sore shoulder surgery");
	}
	
	while(x<14);
	{
 		puts("Sore shoulder surgery");
	}

	for(x=0;x<10;x=x+1,printf("%d\n",x))
 		;
	return (0);
}
