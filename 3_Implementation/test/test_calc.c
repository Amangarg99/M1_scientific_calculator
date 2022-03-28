#include "../Unity/unity.h"
#include "../src/func.h"

#define PROJECT_NAME "Calculator"

/* Prototypes for all the test functions */
void test_addition(void);
void test_subtraction(void);
void test_multiplication(void);
void test_division(void);
void test_sq(void);
// void test_square_root(void);
// void test_factorial(void);
// void test_power(void);
// void test_exponential(void);
// void test_log(void);
// void test_modulus(void);

/* Required by the unity test framework */
void setUp(void) {}
/* Required by the unity test framework */
void tearDown(void) {}

/* Start of the application test */
int main(void)
{
  /* Initiate the Unity Test Framework */
  UnityBegin(NULL);

  /* Run Test functions */
  RUN_TEST(test_addition);
  RUN_TEST(test_subtraction);
  RUN_TEST(test_multiplication);
  RUN_TEST(test_division);
  RUN_TEST(test_sq);
  // RUN_TEST(test_square_root);
  // RUN_TEST(test_factorial);
  // RUN_TEST(test_power);
  // RUN_TEST(test_exponential);
  // RUN_TEST(test_log);
  // RUN_TEST(test_modulus);

  /* Close the Unity Test Framework */
  return UnityEnd();
}


void test_addition(void)
{
  TEST_ASSERT_EQUAL(30, addition(10, 20));

  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15000, addition(7500, 7500));
}

void test_subtraction(void)
{
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));

  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, subtract(1000, 900));
}

void test_multiplication(void)
{
  TEST_ASSERT_EQUAL(0, multiply(1, 0));

  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, multiply(2, 5));
}

void test_division(void)
{
  TEST_ASSERT_EQUAL(3.00, divide(6, 2));

  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1.00, division(2, 2));
}

void test_sq(void)
{
  TEST_ASSERT_EQUAL(100, sq(10));

  /* Dummy fail*/
  
}