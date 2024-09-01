#include <stdio.h>

int	main()
{
	char	str[1000];
	int		i = 0;
	int		isword = 0;
	float	wordchar = -1;
	float	wordcount = 0;

	printf("Enter a sentence: ");
	if (fgets(str, sizeof(str), stdin))
	{
		while (str[i])
		{
			if (str[i] != ' ')
			{
				wordchar++;
				if (!isword)
				{
					wordcount++;
					isword = 1;
				}
			}
			else
				isword = 0;
			i++;
		}
	if (wordcount > 0)
		return (printf("\nAverage word length: %.1f\n", wordchar / wordcount));
	else
		return (printf("Error\n"));
	}
}
