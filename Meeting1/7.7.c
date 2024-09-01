#include <stdio.h>

int	lcfactor(int e, int f)
{
	int tmp;
	while (f)
	{
		tmp = f;
		f = e % f;
		e = tmp;
	}
	return (e);
}

int	main(int ac, char *av[])
{
	char	str[50];
	int		a, b, c, d, e, f, lcf = 0;
	char	op;

	if (ac != 1 || av[1])
		return (0);
	if (!fgets(str, sizeof(str), stdin) || (sscanf(str, "%d/%d%c%d/%d", &a, &b, &op, &c, &d) != 5) ||\
	 (op != '+' && op != '-' && op != '*' && op != '/') || !a || !b || !c || !d)
		printf("Invalid input, relaunch program\n");
	if (op == '+')
		e = (a * d) + (c * b);
	else if (op == '-')
		e = (a * d) - (c * b);
	else if (op == '*')
		e = a * c;
	f = (b * d);
	if (op == '/')
	{
		e = a * d;
		f = b * c;
	}
	lcf = lcfactor(e, f);
	e /= lcf;
	f /= lcf;
	if (e >= f)
	{
		if (!(e % f))
			printf("The result is %d\n", e/f);
		else if (e % f)
			printf("The result is %d %d/%d\n", e/f, e%f, f);
	}
	else
		printf("The result is %d/%d\n", e, f);
	return (0);
}
