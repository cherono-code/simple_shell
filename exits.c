#include "shell.h"

/**
 **_strncpy - copies a string
 *@dest: destination string to be copied to
 *@src: source string
 *@n: amount of characters to be copied
 *Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k, r;
	char *s = dest;

	k = 0;
	while (src[k] != '\0' && k < n - 1)
	{
		dest[k] = src[k];
		k++;
	}
	if (k < n)
	{
		r = i;
		while (r < n)
		{
			dest[r] = '\0';
			r++;
		}
	}
	return (s);
}

/**
 **_strncat - concatenates two strings
 *@dest: first string
 *@src: second string
 *@n: mount of bytes to be maximally used
 *Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, r;
	char *s = dest;

	k = 0;
	r = 0;
	while (dest[k] != '\0')
		i++;
	while (src[r] != '\0' && r < n)
	{
		dest[k] = src[r];
		k++;
		r++;
	}
	if (r < n)
		dest[k] = '\0';
	return (s);
}

/**
 **_strchr - locates a character in a string
 *@s: string to be parsed
 *@c: character to look for
 *Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (0);
}
