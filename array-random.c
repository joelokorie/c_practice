#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int random[40];	
        int r,a,x;
        srand((unsigned)time(NULL));
        for(a=0;a<40;a++)
        {
                random[a]=rand()%101;
		printf("%d\t",random[a]);
		
        }
	putchar('\n');
        return(0);
}
