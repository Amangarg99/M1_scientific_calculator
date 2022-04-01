/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __SCIENTIFIC_CALCULATOR_H__
#define __SCIENTIFIC_CALCULATOR_H__

#include <stdio.h>
#include <stdlib.h>

/**
*  adds the operand value and returns the result
* @param[in] x
* @param[in] y
* @return Result of x + y
*/
int add(int x, int y);

/**
*  subtracts the operand value and returns the result
* @param[in] x
* @param[in] y
* @return Result of x - y
*/
int subtract(int x, int y);

/**
*  multiply the operand value and returns the result
* @param[in] x
* @param[in] y
* @return Result of x * y
*/
int multiply(int x, int y);


/**
* divides the operand value and returns the result 
* @param[in] x
* @param[in] y
* @return integer value of the x / y
* @note returns 0 for divide by 0 error
*/
int divide(int x, int y);

/**
* Square the operand value and returns the result 
* @param[in] x
* @return integer value of the x * x
*/
int square(int x);

/**
* Square root of the operand value and returns the result 
* @param[in] x
* @return integer value of the x^1/2
*/
int square_root(int x);

/**
* Factorial of the operand value and returns the result 
* @param[in] x
* @return integer value of the x!
*/
int factorial(int x);

/**
* power of the operand value  and returns the result 
* @param[in] x
* @param[in] y
* @return integer value of the pow(x,y)
*/
int power(int x, int y);


/**
* Exponent of the operand value and returns the result 
* @param[in] x
* @return integer value of the e^x
*/
int exponent(int x);


/**
* Log of the operand value  and returns the result 
* @param[in] x
* @return integer value of the log(x)
*/
int log(int x);


/**
* Modulus of the operand value  and returns the result 
* @param[in] x
* @param[in] y
* @return integer value of the x%y
*/
int mod(int x, int y);
#endif  /* #define __SCIENTIFIC_CALCULATOR_H__ */
