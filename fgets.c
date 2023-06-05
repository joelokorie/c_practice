#include <stdio.h>
int main()
{
 const int size = 15;
 char name[size];
 printf("Who are you? ");
 fgets(name,size,stdin);
 printf("Glad to meet you, %s",name);
 return(0);
}
