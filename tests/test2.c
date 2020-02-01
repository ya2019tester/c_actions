#include "unity.h"
#include "myhead.h"

void setUp (void) {} /* Is run before every test, put unit init calls here. */
void tearDown (void) {} /* Is run after every test, put unit clean-up calls here. */

void test_AverageThreeBytes_should_AverageMidRangeValues(void)
{
TEST_ASSERT_EQUAL_INT(40, add(30, 40));
TEST_ASSERT_EQUAL_INT(40, add(10, 70));
TEST_ASSERT_EQUAL_INT(0, add(33, 33));
}

int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_AverageThreeBytes_should_AverageMidRangeValues);
return UNITY_END();
}
