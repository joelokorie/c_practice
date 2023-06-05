#include <stdio.h>
int main()
{
 char small, big;
 for(big='Z', small = 'z'; big>='A', small >= 'a'; big=big-1, small = small - 1)
 {
 	printf("%c\t%c\t%d\t%d\n",big,small,big,small);
   		
 }
 
 putchar('\n');
 return(0);
}
