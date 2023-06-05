#include <stdio.h>

int main()
{
	int x;

	for(x=5;x<=100;x+=5)
		printf("%d\t",x);
	
	putchar('\n');

	int y=5;
	
	while (y <=100)
	{
	 	printf("%d\t",y);
		y+=5;
	}

	putchar('\n');
	return(0);
}	
