#include <stdio.h>

int main()
{
	int amount = 0, term = 0;
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
	return 0;
}
