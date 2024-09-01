#include <stdio.h>

int	main()
{
	char	wordone[100];
	char	wordtwo[100];

	printf("Enter first word: ");
	fgets(wordone, sizeof(wordone), stdin);
	printf("Enter second word: ");
	fgets(wordtwo, sizeof(wordtwo), stdin);
	printf("%s%s", wordone, wordtwo);
}
