#include <stdio.h>

int main()
{
    int x;
    float stock[] = {24164.95, 24107.08, 24643.63, 24400.93, 23728.53};
    
    for(x = 0; x < 5; x++)
        printf("The stock market postions are %f\n",  stock[x]);

    return(0);

}
