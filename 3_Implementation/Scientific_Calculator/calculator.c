#include "calculator.h"
#include <stdio.h>

#include <math.h>

#define PI 3.14159265 //PI value

int add(int operand1, int operand2) //addition of two numbers
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2) //substraction of two numbers
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2) //multiplication of two numbers
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2) //division of two numbers
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}
float sine(float operand1) //Trignometry sine value

{

return (sin (operand1*PI/180)); 

}
float cosine(float operand1)  //Trignometry cosine value

 {

return (cos (operand1*PI/180));

}

float tangent(float operand1)  //Trignometry tangent value

{

return (tan(operand1*PI/180));

}

float cosec(float operand1)  //Trignometry cosec value

{

return (1/sin(operand1*PI/180));

}

float sec(float operand1) //Trignometry sec value

{

return (1/cos(operand1*PI/180));

}

 float cot(float operand1) //Trignometry cot value

 {

return (1/tan(operand1*PI/180));

}

 float logten(float operand1) //Logten value

{

return (log10(operand1));

}

 float squareroot(float operand1) //finding the squareroot

 {

return (sqrt(operand1));

}

float cuberoot(float operand1) //finding the cuberoot

 {

return (cbrt(operand1));

}

float exponent(float operand1) //finding the exponent

   {

  return(exp(operand1));

}

float power(float operand1, float operand2) //finding the power 

{

return (pow(operand1,operand2));

}

float modulo(float operand1, float operand2) //finding the modulo

{

return (fmodf(operand1,operand2));

}






