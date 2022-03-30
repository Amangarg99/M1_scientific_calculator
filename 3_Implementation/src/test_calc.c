
#include "func.h"
 
#define PROJECT_NAME "Calculator"

/* Prototypes for all the test functions */
void test_addition(void);
void test_subtraction(void);
void test_multiplication(void);
void test_division(void);
void test_sq(void);
void test_square_root(void);
void test_factorial(void);
void test_power(void);
void test_exponential(void);
void test_log(void);
void test_modulus(void);

/* Required by the unity test framework */
void setUp(void) {}
/* Required by the unity test framework */
void tearDown(void) {}

/* Start of the application test */
int main(void)
{

  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();
 
  

  /* Run Test functions */
  RUN_TEST(test_addition);
  RUN_TEST(test_subtraction);
  RUN_TEST(test_multiplication);
  RUN_TEST(test_division);
  RUN_TEST(test_sq);
  RUN_TEST(test_square_root);
  RUN_TEST(test_factorial);
  RUN_TEST(test_power);
  RUN_TEST(test_exponential);
  RUN_TEST(test_log);
  RUN_TEST(test_modulus);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_addition(void)
{
  TEST_ASSERT_EQUAL(30, addition(10, 20));

}

void test_subtraction(void)
{
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));

  
}

void test_multiplication(void)
{
  TEST_ASSERT_EQUAL(0, multiply(1, 0));

}

void test_division(void)
{
  TEST_ASSERT_EQUAL(3.00, divide(6, 2));


}

void test_sq(void)
{
  TEST_ASSERT_EQUAL(100, sq(10));

  
}

void test_square_root(void)
{
  TEST_ASSERT_EQUAL(7, sqrt1(49));

}
void test_factorial(void)
{
  TEST_ASSERT_EQUAL(120, factorial(5));

}
void test_power(void)
{
  TEST_ASSERT_EQUAL(8, power(2,3));
}
void test_exponential(void)
{
  TEST_ASSERT_EQUAL(7.39, exponent(2));

}
void test_log(void)
{
  TEST_ASSERT_EQUAL(1.00, logarithm(10));

}
void test_modulus(void)
{
  TEST_ASSERT_EQUAL(2, mod(5,3));

}