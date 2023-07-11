#include "main.h"
#include <string.h>

/**
 * getWord - get the word from string.
 * @s: the string.
 * @start: start position
 * @end: end position
 * Return: the word.
 */
char *getWord(char *s, int start, int end)
{
	int i;

	char *w;

	w = malloc((end - start + 1) * sizeof(char));

	for (i = 0; start < end; start++, i++)
		w[i] = s[start];

	w[i] = '\0';

	return (w);
}
/**
 * count_words - counting the string words
 * @str: the string.
 * Return: words count.
 */
int count_words(char *str)
{
	int i, s = -1, e = -1, wc = 0;

	for (i = 0; i < (int) strlen(str); i++)
	{
		if (str[i] != ' ' && s < 0)
			s = i;
		else if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && s >= 0)
			e = i;
		else if (str[i + 1] == '\0' && s >= 0)
			e = i + 1;

		if (s >= 0 && e > 0)
			wc++;
	}

	return (wc);
}

/**
 * strtow - splits a string into words.
 * @str: the string.
 * Return: splitted words.
 */
char **strtow(char *str)
{
	int i, wi = 0, wc, s = -1, e = -1;

	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wc = count_words(str);

	if (wc == 0)
		return (NULL);

	words = malloc((wc + 1) * sizeof(char *));

	if (str[0] != ' ')
		s = 0;

	for (i = 0; i < (int) strlen(str); i++)
	{
		if (str[i] != ' ' && s < 0)
			s = i;
		else if ((str[i] == ' ' && s >= 0))
			e = i;
		else if (str[i + 1] == '\0' && s >= 0)
			e = i + 1;

		if (s >= 0 && e > 0)
		{
			char *word = getWord(str, s, e);

			words[wi] = word;
			wi++;
			s = -1;
			e = -1;
		}
	}

	words[wi] = NULL;

	return (words);
}
