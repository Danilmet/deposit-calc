#include "ctest.h"
#include "deposit.h"

CTEST (ValidateAmountInput, WrongAmountCorrectTerm)
{
	const int CHECK_VALUE = check(0, 100);
	const int EXPECTED = 1;
	ASSERT_EQUAL(EXPECTED, CHECK_VALUE;
}

CTEST (ValidateAmountInput, WrongAmountWrongTerm)
{
        const int CHECK_VALUE = check(0, 0);
        const int EXPECTED = 1;
        ASSERT_EQUAL(EXPECTED, CHECK_VALUE;
}

CTEST (ValidateTermInput, CorrectAmountWrongTerm)
{
        const int CHECK_VALUE = check(10000, 0);
        const int EXPECTED = 1;
        ASSERT_EQUAL(EXPECTED, CHECK_VALUE;
}

CTEST (ValidateTermInput, CorrectAmountWrongTerm)
{
        const int CHECK_VALUE = check(10000, 366);
        const int EXPECTED = 1;
        ASSERT_EQUAL(EXPECTED, CHECK_VALUE;
}

CTEST (ValidateInput, CorrectAmountCorrectTerm)
{
        const int CHECK_VALUE = check(10000, 100);
        const int EXPECTED = 0;
        ASSERT_EQUAL(EXPECTED, CHECK_VALUE;
}

