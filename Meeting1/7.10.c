#include <stdio.h>

int	main(int ac, char *av[])
{
	char	str[100];
	int		vowels, i = 0;

	if (ac != 1 || av[1])
		return (0);
	printf("Enter a sentence: ");
	scanf("%s", str);
//	fgets(str, sizeof(str), stdin);
	while (str[i])
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||\
 		str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
			vowels++;
		i++;
	}
	printf("Your sentence contains %d vowels.\n", vowels);		
}
