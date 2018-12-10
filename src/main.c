#include "deposit.h"

int main()
{
	int amount = 0, term = 0, check = 0;
	double contribution = 0.0;
	printf("Enter the amount of Your deposit:  ");
	scanf("%d", &amount);
	printf("Enter the term of Your deposit:  ");
	scanf("%d", &term);
	check = check(amount, term);
	if (check)
	{
		return check;
	}
	contribution = calc(amount, term);
	printf("Your contribution = %.0f \n", contribution);
	return 0;
}
