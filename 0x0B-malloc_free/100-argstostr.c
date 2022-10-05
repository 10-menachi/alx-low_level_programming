#include "stdlib.h"
#include "stdio.h"
/**
 * argstostr - concantenates all arguments
 * of a program
 * @ac: number of args passed
 * @av: array of pointers to args
 *
 * Return: null if process fails or if ac
 * is o, pointer to a new string otherwise
 */
char *argstostr(int ac, char **av)
{
	char *st;
	int i, j, k = 0, l = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				l++;
				j++;
			}
			i++;
		}
		st = malloc(sizeof(char) * l + 1);
		if (st == NULL)
		{
			return (NULL);
		}
		else
		{
			i = 0;
			while (i < ac)
			{
				j = 0;
				while (av[i][j])
				{
					st[k++] = av[i][j];
					j++;
				}
				st[k++] = '\n';
				i++;
			}
			st[l] = '\0';
		}
	}
	return (st);
}
