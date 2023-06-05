#include <stdio.h>
int main()
{
 const int size = 15;
 char firstname[size];
 char secondname[size];
 printf("Type your first name: ");
 fgets(firstname,size,stdin);
 printf("Type your second name: ");
 fgets(secondname,size,stdin);
 printf("Pleased to meet you,%s%s\n",firstname,secondname);
 return(0);
}
