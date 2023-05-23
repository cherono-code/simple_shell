#include "shell.h"

/**
 * interactive - returns true if shell is interactive mode
 * @info: the struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if character is a delimeter
 * @c: char to check
 * @delim:  delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 *_isalpha - checks for alphabetic character
 *@c:  character to input
 *Return: 1 if c is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 *_atoi - converts a string to an integer
 *@s: string to be converted
 *Return: 0 if no numbers in string, converted number otherwise
 */

int _atoi(char *s)
{
	int i, si = 1, f = 0, out;
	unsigned int resultt = 0;

	for (i = 0;  s[i] != '\0' && f != 2; i++)
	{
		if (s[i] == '-')
			si *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			f = 1;
			resultt *= 10;
			resultt += (s[i] - '0');
		}
		else if (f == 1)
			f = 2;
	}

	if (si == -1)
		out = -resultt;
	else
		out = resultt;

	return (out);
}
