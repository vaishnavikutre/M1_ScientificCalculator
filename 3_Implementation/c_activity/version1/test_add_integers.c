#include "../../unity/unity.h"
//#include "add_integers_v2.c"
//#include "add_integers.c"
extern void manual_test_add_integers();
//extern void add_integers(int, int);
extern int add_integers(int param1, int param2);
void setUp(void)
{
}

void tearDown(void)
{
}

void automated_test_add_integers()
{
    TEST_ASSERT_EQUAL(0, add_integers(0, 0));
    TEST_ASSERT_EQUAL(30, add_integers(10, 20));
    TEST_ASSERT_EQUAL(-30, add_integers(-10, -20));
}

void automated_test_add_overflow()
{
    TEST_ASSERT_EQUAL(INT_MAX, add_integers(INT_MAX, 0));
}

void automated_test_add_underflow()
{
    TEST_ASSERT_EQUAL(INT_MIN, add_integers(INT_MIN, 0));
}

int main(void)
{
    manual_test_add_integers();

    UnityBegin(NULL);

    RUN_TEST(automated_test_add_integers);
    RUN_TEST(automated_test_add_overflow);
    RUN_TEST(automated_test_add_underflow);

    return (UnityEnd());
}
