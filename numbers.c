#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    const int size = 7;
    int numbers[] = { 10, 12, 14, 15, 16, 18, 20};
    float numbers2[size];

    for (x = 0; x< size; x++)
    {
        numbers2[x] = sqrt(numbers[x]);
        printf("The square root of %d is %.2f\n",numbers[x],numbers2[x]);
    }
    
    return(0);

}
