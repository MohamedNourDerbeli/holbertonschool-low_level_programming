#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	if (!haystack || !needle)
		return (NULL);

	while (*haystack)
	{
		char *start = haystack;
		char *sub_needle = needle;

		while (*haystack && *sub_needle && *haystack == *sub_needle)
		{
			haystack++;
			sub_needle++;
		}

		if (!*sub_needle)
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}
