#include <stdio.h>
#include <unistd.h>

int	main()
{
	char	str[1000];
	int		i = 0;

	if (fgets(str, sizeof(str), stdin))
	{
		while (str[i])
		{
			if (str[i] == 'A' || str[i] == 'a')
				str[i] = '4';
			else if (str[i] == 'B' || str[i] == 'b')
				str[i] = '8';
			else if (str[i] == 'E' || str[i] == 'e')
				str[i] = '3';
			else if (str[i] == 'I' || str[i] == 'i')
				str[i] = '1';
			else if (str[i] == 'O' || str[i] == 'o')
				str[i] = '0';
			else if (str[i] == 'S' || str[i] == 's')
				str[i] = '5';
			else if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			if (str[i] == '\n')
			{
				str[i] = '\0';
				break;
			}
			i++;
		}
		printf("%s!!!!!!!!!!\n", str);
	}
}
