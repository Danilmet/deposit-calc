#include "ctest.h"
#include "deposit.h"

CTEST (CalcContributeTest, FirstVariantCalc)
{
	const double CHECK_VALUE = calc(10000, 20);
	const double EXPECTED = 9000.0;
	ASSERT_EQUAL(EXPECTED, CHECK_VALUE);
}

CTEST (CalcContributeTest, SecondVariantCalc)
{
        const double CHECK_VALUE = calc(110000, 20);
        const double EXPECTED = 99000.0;
        ASSERT_EQUAL(EXPECTED, CHECK_VALUE);
}

CTEST (CalcContributeTest, ThirdVariantCalc)
{
        const double CHECK_VALUE = calc(10000, 40);
        const double EXPECTED = 10200.0;
        ASSERT_EQUAL(EXPECTED, CHECK_VALUE);
}

CTEST (CalcContributeTest, FourthVariantCalc)
{
        const double CHECK_VALUE = calc(110000, 40);
        const double EXPECTED = 113300.0;
        ASSERT_EQUAL(EXPECTED, CHECK_VALUE);
}

CTEST (CalcContributeTest, FifthVariantCalc)
{
        const double CHECK_VALUE = calc(10000, 200);
        const double EXPECTED = 10600.0;
        ASSERT_EQUAL(EXPECTED, CHECK_VALUE);
}

CTEST (CalcContributeTest, SixthVariantCalc)
{
        const double CHECK_VALUE = calc(110000, 200);
        const double EXPECTED = 118800.0;
        ASSERT_EQUAL(EXPECTED, CHECK_VALUE);
}

CTEST (CalcContributeTest, SeventhVariantCalc)
{
        const double CHECK_VALUE = calc(10000, 300);
        const double EXPECTED = 11200.0;
        ASSERT_EQUAL(EXPECTED, CHECK_VALUE);
}

CTEST (CalcContributeTest, EighthVariantCalc)
{
        const double CHECK_VALUE = calc(110000, 300);
        const double EXPECTED = 126500.0;
        ASSERT_EQUAL(EXPECTED, CHECK_VALUE);
}

