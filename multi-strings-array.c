#include <stdio.h>
int main()
{
	int const size = 3;
	char caesar[6][9] = {
		"Julius",
		"Augustus",
		"Nero",
		"Tiberius",
		"Caligula",
		"Claudius"
	};

	int x,index;
	for(x=0;x<6;x++)
	{
		puts(caesar[x]);
		//index = 0;
		//while(caesar[x][index] != '\0')
		//{
		//	putchar(caesar[x][index]);
		//	index++;
		//}
//		putchar('\n');
	}
	return(0);
}
