#include "deposit.h"
#include "ctest.h"

CTEST(InputValidation, BordersCheckPassedLeft)
{
    const int result = Error(0, 0);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(InputValidation, BordersCheckPassedRight)
{
    const int result = Error(20, 100);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(InputValidation, DateLessZeroFail)
{
    const int result = Error(-5, 0);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(InputValidation, AmountLessZeroFail)
{
    const int result = Error(5, -100);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(InputValidation, DateIsLonger365)
{
    const int result = Error(1000, 30);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
