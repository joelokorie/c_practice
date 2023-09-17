#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Press Enter to clear the screen:");
	getchar();
	//system("cls"); /* Windows only */
	system("clear"); /* Mac - Unix */
	puts("That's better");
	system("./cosine");
	puts("Well done !!!");
	return(0);
}
