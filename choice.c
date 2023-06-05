#include <stdio.h>

int main()
{
	int c;

	printf("Do you want to continue (Y/N)?");
	c = getchar();
	if (c == 'Y' || c =='y')
	{ 
		printf("continue with the task \n");
	}
	else if (c == 'N' || c == 'n')
	{
		printf("You can stop now \n");
	}
	else
	{
		printf("You are yet to type Y or N \n");
	}
	return (0);
}
