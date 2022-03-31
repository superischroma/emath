#include "emath.h"

#define bool int
#define true 1
#define false 0

#define undefined 0 / 0

#define PI 3.1415926535897932384626433832795
#define E 2.7182818284590452353602874713527

int emiabs(int x)
{
    return x < 0 ? -x : x;
}

double emipow(double x, int p)
{
    double v = 1.0;
    bool np = p < 0;
    p = emiabs(p);
    for (int i = 1; i <= p; i++) v *= x;
    return np ? (1 / v) : v;
}

double emifac(int x)
{
    if (x < 0) return undefined;
    double v = 1.0;
    for (int i = x; i >= 1; i--) v *= i;
    return v;
}

double emexp(double x)
{
    if (x < -4.0 || x > 4.0)
    {
        double prod = 1.0;
        int half = x / 2;
        prod *= emexp(half);
        prod *= emexp(x - half);
        return prod;
    }
    double sum = 0.0;
    for (int i = 0; i <= 25; i++) sum += emipow(x, i) / emifac(i);
    return sum;
}

double emln(double x)
{
    if (x < 0.4 || x > 1.7)
    {
        double divsum = 0.0;
        divsum += emln(x / 1.7) + emln(1.7);
        return divsum;
    }
    double sum = 0.0;
    for (int i = 1; i <= 25; i++) sum += (emipow(-1.0, i - 1) * emipow(x - 1, i)) / i;
    return sum;
}

double empow(double x, double p)
{
    return emexp(p * emln(x));
}