#include <stdio.h>

int	main(int ac, char *av[])
{
	float	number, max = 0;
	char	inputs[20];

	if (ac != 1 || av[1])
		return (0);
	while (1)
	{
		printf("Enter a number: ");
		fgets(inputs, sizeof(inputs), stdin);
		if (sscanf(inputs, "%f", &number))
		{
			if (number > max)
				max = number;
		}
		else
		{
			printf("Invalid input. ");
			continue;
		}
		if (number <= 0 && max == (int)max)
			return(printf("The largest number entered was %d\n", (int)max));
		else if (number <= 0)
			return(printf("The largest number entered was %.2f\n", max));
	}
	return (0);	
}
