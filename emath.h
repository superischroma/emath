#ifndef EMATH_H
#define EMATH_H

/**
 * @brief Computes the absolute value of x
 * 
 * @param x What to take the absolute value of
 * @return int 
 */
int emiabs(int x);
/**
 * @brief Computes x^p
 * 
 * @param x Base
 * @param p Integral exponent
 * @return double 
 */
double emipow(double x, int p);
/**
 * @brief Computes the factorial of x
 * 
 * @param x What to take the factorial of
 * @return double 
 */
double emifac(int x);
/**
 * @brief Computes e^x using exponent properties and power series
 * 
 * @param x Real exponent
 * @return double 
 */
double emexp(double x);
/**
 * @brief Computes ln x using log chaining and power series
 * 
 * @param x Location
 * @return double 
 */
double emln(double x);
/**
 * @brief Computes x^p using e^(p ln x)
 * 
 * @param x Base
 * @param p Real exponent
 * @return double 
 */
double empow(double x, double p);

#endif