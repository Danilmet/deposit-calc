#include <stdio.h>

int main()
{
	int amount = 0, term = 0;
	double contribution = 0.0;
	printf("Enter the amount of Your deposit:  ");
	scanf("%d", &amount);
	printf("Enter the term of Your deposit:  ");
	scanf("%d", &term);
	if (amount < 10000)
	{
		printf("Amount of Your deposit must be bigger then 10.000\n");
		return 1;
	}
	if (term < 1 || term > 366)
	{
		printf("Term of your deposit must be less then 365 days\n");
		return 1;
	}
	contribution = (double )amount;
	if (term <= 30)
	{
		contribution *= 0.9;
	}
	else if (term <= 120)
	{
		if (amount <= 100000)
		{
			contribution *= 1.02;
		}
		else
		{
			contribution *= 1.03;
		}
	}
	else if (term <= 240)
	{
		if (amount <= 100000)
		{
			contribution *= 1.06;
		}
		else
		{
			contribution *= 1.08;
		}
	}
	else
	{
		if (amount <= 100000)
		{
			contribution *= 1.12;
		}
		else
		{
			contribution *= 1.15;
		}
	}
	printf("Your contribution = %.0f \n", contribution);
	return 0;
}
