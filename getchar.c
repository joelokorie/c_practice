#include <stdio.h>
int main()
{
 int c, d, e;
 
 printf("I'm waiting for three characters: ");
 c = getchar();
 d = getchar();
 e = getchar();
 printf("The three characters are '%c','%c'and '%c'.\n",c , d, e);
 printf("This are the ASCII codes of the characters '%d','%d', and '%d'.\n", c, d, e);
 return(0);
}
