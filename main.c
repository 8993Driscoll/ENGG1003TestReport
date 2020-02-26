#include <stdio.h>

int main() { //Removing int results in a warning
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x); //Note change of %d to %f
    y = (x+2)/(x-1);
    printf("y: %f\n", y);
    return 0;
}
