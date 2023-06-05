#include <stdio.h>

//void prompt(); /* function prototype */
//void busy();

void prompt(void)
{
 	printf("$ ");
}

void busy(void)
{
 	int loop;
        char input[32];
 
        loop=0;
        while(loop<5)
        {
        	prompt();
                fgets(input,32,stdin);
                loop=loop+1;
        }
}

int main()
{
         busy();
         return(0);
}
