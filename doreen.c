#include <stdio.h>
#include <stdlib.h>

int main()
{
	char answer[4];

	printf("Do you go to the saloon, yes or no \n");
	fgets(answer, 4, stdin);


	if((answer[0] == 'Y') || (answer[0] == 'y'))
	{
		printf("Give your saloon name \n");
	}
	else
	{
		printf("Do you use SPA \n");
	}

	return (0);

}
