#include <stdio.h>

int main()
{

	int x, y, z;
	for(x ='A'; x <= 'D'; x = x + 1)
	{
		for(y = 'A'; y <= 'D'; y = y + 1)
		{
			for (z = 'A'; z <= 'D'; z = z + 1)
			{
				printf("%c%c%c\t", x,y,z);
			}
		}
		putchar('\n');
	} 
//	putchar('\n');
	return(0);
}
