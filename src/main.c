#include "deposit.h"

int main()
{
	int amount = 0, term = 0, checkValue = 0;
	double contribution = 0.0;
	printf("Enter the amount of Your deposit:  ");
	scanf("%d", &amount);
	printf("Enter the term of Your deposit:  ");
	scanf("%d", &term);
	checkValue = check(amount, term);
	if (checkValue)
	{
		return checkValue;
	}
	contribution = calc(amount, term);
	printf("Your contribution = %.0f \n", contribution);
	return 0;
}
