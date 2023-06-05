#include <stdio.h>

void graph(int count, char c);

int main()
{
	int value;
	value = 2;
	while(value<=64)
	{
		graph(value,'?');
		printf("Value is %d\n",value);
		value = value * 2;
	}
	return(0);
}

void graph(int count, char c)
{
	int x;
	for(x=0;x<count;x=x+1)
		putchar(c);
	putchar('\n');
}
