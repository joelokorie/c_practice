#include <stdio.h>
int main()
{
 	int alpha,code;
 	for(alpha='A';alpha<='G';alpha=alpha+1)
 	{
 		printf("%c\t",alpha);
		for(code=1;code<=7;code=code+1)
 		{
 			printf("%d\t", code);
//			putchar('\n');
 		}
//		printf("%c\t",alpha);
		putchar('\n'); 
 	}
 	return(0);
}
