#include <stdio.h>

int	main(int ac, char *av[])
{
	int	amt;

	if (ac != 1 || av[1])
		return (0);
	printf("Enter a U.S. dollar amount: ");
	if (scanf("%d", &amt) && amt >= 0)
		printf("$20 bills: %d, $10 bills: %d, $5 bills: %d, $1 bills: %d\n", \
		amt / 20, (amt % 20) / 10, (amt % 10) / 5, amt % 5);
	else
		printf("Invalid input. Relaunch program\n");
}
