#include <stdio.h>
int main()
{
 int a,b;
 
 printf("Input the first number: ");
 scanf("%d", &a);
 printf("Input the second number: ");
 scanf("%d", &b);

 if( a > b)
 {
 printf("%d is greater than %d\n",a,b);
 }
 else
 {
 printf("%d is not greater than %d\n",a,b);
 }
 return(0);
}
