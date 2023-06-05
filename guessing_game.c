#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int guess;
	int secret;
	
	srand((unsigned)time(NULL));
	secret = rand()%10;

	printf("Can you guess the secret number: ");
	scanf("%d",&guess);
	if(guess==secret)
	{
		puts("You guessed it!");
//		return(0);
	}
	if(guess!=secret)
	{
        	puts("Wrong!");
  //      	return(1);
	}

	printf("The secret number is %d \n ", secret);
	return(0);
}
