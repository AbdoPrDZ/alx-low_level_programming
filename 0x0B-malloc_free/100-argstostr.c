#include "main.h"
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: args size.
 * @av: args.
 * Return: a pointer to a new string.
 */
char *argstostr(int ac, char **av)
{
	long int i, j, p, sCount = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		sCount += strlen(av[i]) + 1;

	s = malloc(sizeof(char) * sCount + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0, p = 0; i < ac; i++)
	{
		for (j = 0; j < (long int) strlen(av[i]); j++, p++)
			s[p] = av[i][j];
		s[p] = '\n';
		p++;
	}

	s[p] = '\0';

	return (s);
}
