#include <stdio.h>

int	main()
{
	char	str[1000];
	int		i;
	int		j;
	int		arr[9] = {0};

	printf("Enter a number: ");
	if (fgets(str, sizeof(str), stdin))
	{
		for (j = 0; j < 10; j++)
		{
			i = 0;
			while (str[i])
			{
				if (str[i] == '0' + j)
					arr[j] += 1;
				i++;
			}
		}
		printf("Digit:\t   0 1 2 3 4 5 6 7 8 9\nOccurences:");
		j = 0;
		while (j < 10)
			printf(" %d", arr[j++]);
		printf("\n");		
	}
}
