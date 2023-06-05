#include <stdio.h>

void limit(int stop);
int verify(int stop);

int main()
{
	int s;
	printf("Enter a stopping value (0-100): ");
	scanf("%d",&s);
	verify(s);

	return(0);
}


int verify(int stop)
{
	if(stop < 0 || stop > 100)
	{
		puts("This number is out of range");
		
	}
	else
	{
		limit(stop);
		
	}
}

void limit(int stop)
{
      int x;
      for(x=0;x<=100;x=x+1)
      {
              printf("%d ",x);
              if(x==stop)
              {
                      puts("You won!");
                      return;
              }
 
      }
      puts("I won");
 
 }
