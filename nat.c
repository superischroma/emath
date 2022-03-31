#include <stdio.h>

#include "emath.h"

int main()
{
    float v;
    printf("enter a number: ");
    scanf("%f", &v);
    printf("exp(%f) = %f\n", v, emexp(v));
    printf("ln(%f) = %f\n", v, emln(v));
}