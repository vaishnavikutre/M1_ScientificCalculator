#include "./inc/calculator.h"
#include <stdio.h>
#include <stdlib.h>
typedef enum options {
  NONE,
  ADDITION,
  SUBSTRACTION,
  MULTIPLICATION,
  DIVISION,
  TRIGNOMETRIC_FUNCTIONS,
  LOGTEN,
  SQUAREROOT,
  CUBEROOT,
  EXPONENT,
  POWER,
  MODULO,
  EXIT
} options_t;

typedef enum functions {
  START,
  SINE,
  COSINE,
  TANGENT,
  SEC,
  COSEC,
  COT,
  END
} functions_t;
int main() {
  int choice = NONE;
  float result,x,y;

  printf("\n\t**** Welcome to Scientific Calculator Application ****");
  printf("\n\t======================================================\n");
  for (;;) {

    printf("\n\tSelect your choice: \t");
    printf("\n\t---------------------------\n");
    printf("\t1.Addition \n\t2.Substraction \n\t3.Multiplication \
    \n\t4.Division \n\t5.Trignometric functions \n\t6.Logten \
    \n\t7.Squareroot \n\t8.Cuberoot \n\t9.Exponent \n\t10.Power \n\t11.Modulo \n\t12.Exit\n");

    printf("\n\tEnter your choice: \t");
    printf("\n\t---------------------------\n\t");
    scanf("%d", &choice);

    switch (choice) {
    case ADDITION :
    {
      float x,y;
      float p1,*p2;
      p1=&x;
      p2=&y;
      printf("\tEnter 1st operand :\n\t");
      scanf("%f",p1);
      printf("\tEnter 2nd operand :\n\t");
      scanf("%f",p2);
      result=add(x,y);
      printf("\t%f\n",result);
      break;
    }
    case SUBSTRACTION :
    {
      float x,y;
      float *p2,*p1;
      p1=&x;
      p2=&y;
      printf("\tEnter 1st operand :\n \t");
      scanf("%f",p1);
      printf("\tEnter 2nd operand :\n\t");
      scanf("%f",p2);
      result=sub(x,y);
      printf("\t%f\n",result);
      break;
    }

    case MULTIPLICATION :
    {
      float x,y;
      printf("\tEnter 1st operand :\n \t");
      scanf("%f",&x);
      printf("\tEnter 2nd operand :\n\t");
      scanf("%f",&y);
      result=multi(x,y);
      printf("\t%f\n",result);
      break;
    }

    case DIVISION :
    {
      div_t result;
      int x,y;
      printf("\tEnter 1st operand :\n \t");
      scanf("%d",&x);
      printf("\tEnter 2nd operand :\n\t");
      scanf("%d",&y);
      
      if(0 == y)
      {
        printf("\tEnter proper operands!!!!!!!!!!!!!!1\n");
        break;
      }
      else{
        result=div(x,y);  
        printf("\tQuotient part of (x/y) = %d\n", result.quot);
        printf("\tRemainder part of (x/y) = %d\n", result.rem);
        break;
      }
    }
    case TRIGNOMETRIC_FUNCTIONS :
    {
      int function = NONE;
      printf("\n\tSelect your choice: ");
      printf("\n\t---------------------------\n");
      printf("\t1.Sine \n\t2.Cosine \n\t3.Tangent \n\t4.Sec \n\t5.Cosec \n\t6.Cot \n\t7.Exit\n");

      printf("\n\tEnter your choice: \t");
      printf("\n\t---------------------------\n\t");
      scanf("%d", &function);

      switch (function)
      {
      case SINE :
      {
          float x;
          printf("\tEnter the value of sine x : \n\t");
          scanf("%f",&x);
          result=sines(x);
          printf("\t%f \n",result);
          continue;
      }

      case COSINE :
      {
        float x;
        printf("\tEnter the value of cos x : \n\t");
        scanf("%f",&x);
        result=cosV(x);
        printf("\t%f \n",result);
        continue;
      }
      case TANGENT :
      {
        float x;
        printf("\tEnter the value of tan x : \n\t");
        scanf("%f",&x);
        result=tanV(x);
        printf("\t%f \n",result);
        continue;
      }
      case COSEC :
      {
        float x;
        printf("\tEnter the value of cosec x : \n\t");
        scanf("%f",&x);
        result=cosecV(x);
        printf("\t%f \n",result);
        continue;
      }
      case SEC :
      {
        float x;
        printf("\tEnter the value of sec x : \n\t");
        scanf("%f",&x);
        result=secV(x);
        printf("\t%f \n",result);
        continue;
      }
      case COT :
      {
        float x;
        printf("\tEnter the value of cot x : \n\t");
        scanf("%f",&x);
        result=cotV(x);
        printf("\t%f \n",result);
        continue;
      }
      
      case END:
      printf("\n\t **** Exiting Functions Apllication **** ");
      printf("\n\t==============================\n");
      exit(0);
      break;

      default:
        printf("\n\t *** Selected option not available *** \t");
        printf("\n\t======================================\n");
        break;
      }

    }
    case LOGTEN :
    {
      float x;
      printf("\tEnter the value of x : \n\t");
      scanf("%f",&x);
      result=logten(x);
      printf("\t%f \n",result);
      break;
    }
    case SQUAREROOT :
    {
      float x;
      printf("\tEnter the value of x : \n\t");
      scanf("%f",&x);
      result=squarerootV(x);
      printf("\t%f \n",result);
      break;
    }
    case CUBEROOT :
    {
      float x;
      printf("\tEnter the value of x : \n\t");
      scanf("%f",&x);
      result=cuberootV(x);
      printf("\t%f \n",result);
      break;
    }
    case EXPONENT :
    {
      float x;
      printf("\tEnter the value of x : \n\t");
      scanf("%f",&x);
      result=exponentV(x);
      printf("\t%f \n",result);
      break;
    }
    case POWER :
    {
      float x,y;
      printf("\tEnter 1st operand :\n \t");
      scanf("%f",&x);
      printf("\tEnter 2nd operand :\n\t");
      scanf("%f",&y);
      result=powerV(x,y);
      printf("\t%f\n",result);
      break;
    }
    case MODULO :
    {
      float x,y;
      printf("\tEnter 1st operand :\n \t");
      scanf("%f",&x);
      printf("\tEnter 2nd operand :\n\t");
      scanf("%f",&y);
      result=modulo(x,y);
      printf("\t%f\n",result);
      break;
    }

    case EXIT:
      printf("\n\t **** Exiting application **** ");
      printf("\n\t==============================\n");
      exit(0);
      break;

    default:
      printf("\n\t *** Selected option not available *** \t");
      printf("\n\t======================================\n");
    }
  }
}
