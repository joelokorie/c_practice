#include <stdio.h>

int main()
{	
	int x=5;

	while (x > -5)
	{
		printf("%d\t",x);
		puts("Get off my lawn, you kids");
		x--;
	}
	
	
	
	while (x < 6)
	{
		printf("%d\t",x);
		puts("You are disturbing my sleep");
		x++;
	}
		
	putchar('\n');
	return (0);
}
