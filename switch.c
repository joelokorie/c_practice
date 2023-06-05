#include <stdio.h>
int main()


{
 char code;

 printf("Enter the error code (A, B or c): ");
 scanf("%c",&code);

 switch(code)
 {
 case 'A':
 case 'a':
 puts("Drive Fault, not your fault.");
 break;

 case 'B':
 case 'b':
 puts("Illegal format, call a lawyer.");
 break;

 case 'C':
 case 'c':
 puts("Bad filename, spank it.");
 break;

 default:
 puts("That's not 1, 2, or 3");
 }

 return(0);
}
