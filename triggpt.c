#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    int i;
    int numPoints = 50;
    int amplitude = 70;

    for (i = 0; i < numPoints; i++) {
        double angle = ((2 * PI)/numPoints) * i;
        int y = amplitude * sin(angle);

        // Print the graph using asterisks
        for (int j = 0; j < y + amplitude; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
