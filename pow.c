#include <stdio.h>

#include "emath.h"

int main()
{
    float x;
    printf("base? ");
    scanf("%f", &x);
    float p;
    printf("power? ");
    scanf("%f", &p);
    printf("%f^%f = %f", x, p, empow(x, p));
}