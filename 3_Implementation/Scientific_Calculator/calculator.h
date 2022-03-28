#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


//adds  operand 1 and operand2 and returns result of operand1 + operand2
int add(int operand1, int operand2);

//substract  operand1 and operand2 and returns result of operand1 - operand2
int subtract(int operand1, int operand2);

//multiply  operand1 and operand2 and returns result of operand1 * operand2
int multiply(int operand1, int operand2);

//Divides  operand1 and operand2 and returns result of operand1 / operand2
int divide(int operand1, int operand2);

//
float sine(float operand1);

float cosine(float operand1);

float tangent(float operand1);

float cosec(float operand1);

float sec(float operand1);

float cot(float operand1);

float logten(float operand1);

float squareroot(float operand1);

float cuberoot(float operand1);

float exponent(float operand1);

float power(float operand1, float operand2);

float modulo(float operand1, float operand2);

#endif  /* #define __CALCULATOR_H__ */