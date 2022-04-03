#include "unity.h"
#include "../inc/calculator.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_add(void)
{
  TEST_ASSERT_EQUAL(30.000000, add(10, 20));
  TEST_ASSERT_EQUAL(-10.000000, add(10, -20));
  TEST_ASSERT_EQUAL(-30.000000, add(-10, -20));
  TEST_ASSERT_EQUAL(10.000000, add(-10, 20));
  TEST_ASSERT_EQUAL(50.000000, add(30, 20));
}

void test_sub(void)
{
  TEST_ASSERT_EQUAL(-3.000000, sub(0, 3));
  TEST_ASSERT_EQUAL(2.000000, sub(4, 2));
  TEST_ASSERT_EQUAL(10.000000, sub(30, 20));
  TEST_ASSERT_EQUAL(5.000000, sub(10, 5));
  TEST_ASSERT_EQUAL(90.000000, sub(100, 10));

}

void test_multi(void)
{
  TEST_ASSERT_EQUAL(0, multi(1, 0));
}

void test_div(void)
{
  TEST_ASSERT_EQUAL(0, divide(1, 0));
}

void test_sine(void)
{
  TEST_ASSERT_EQUAL(.500000, sines(30));
  //TEST_ASSERT_EQUAL(0.000000, sines(0));
}

void test_cosine(void)
{
  TEST_ASSERT_EQUAL(0.500000, cosV(60));
}

void test_tan(void)
{
  TEST_ASSERT_EQUAL(0.000000, tanV(0));
}

void test_cosec(void)
{
  TEST_ASSERT_EQUAL(1.000000, cosecV(90));
}

void test_sec(void)
{
  TEST_ASSERT_EQUAL(1.000000, secV(0));
}

void test_cot(void)
{
  TEST_ASSERT_EQUAL(0.000000, cotV(90));
}

void test_logten(void)
{
  TEST_ASSERT_EQUAL(1.000000, logten(10));
}

void test_squareroot(void)
{
  TEST_ASSERT_EQUAL(2.000000, squarerootV(4));
}

void test_cuberoot(void)
{
  TEST_ASSERT_EQUAL(3.000000, cuberootV(27));
}

void test_exponent(void)
{
  TEST_ASSERT_EQUAL(7.389056, exponentV(2));
}

void test_power(void)
{
  TEST_ASSERT_EQUAL(16.000000, powerV(2,4));
}

void test_modulo(void)
{
  TEST_ASSERT_EQUAL(1.000000, modulo(17,4));
}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */

  
  RUN_TEST(test_add);
  RUN_TEST(test_sub);
  RUN_TEST(test_multi);
  RUN_TEST(test_div);

  RUN_TEST(test_sine);
  RUN_TEST(test_cosine);
  RUN_TEST(test_tan);
  RUN_TEST(test_cosec);
  RUN_TEST(test_sec);
  RUN_TEST(test_cot);
  RUN_TEST(test_logten);
  RUN_TEST(test_squareroot);
  RUN_TEST(test_cuberoot);
  RUN_TEST(test_exponent);
  RUN_TEST(test_power);
  RUN_TEST(test_modulo);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
