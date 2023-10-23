/**
 * _strlen - check the code
 *
 * Return: i.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != "\0"; s++)
		i++;
	return (i);
}
