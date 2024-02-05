/* Write a function that take a string as an argument and return an array of words separated by space, tabs or new lines.
 *
*/

#include <stdlib.h>
#define isspace(c) (c == ' ' || c == '\t' || c == '\n')

int	count_words(char *str);
int	ft_lenword(char *str);
char *ft_strdupword(char *str);
char **ft_split(char *str)
{
	int count = count_words(str);
	char **split = NULL;
	int i = 0;
	int j = 0;
	if (!(split = malloc((count +1) * sizeof (char *))))
		return ( NULL);
	while (str[i])
	{
		while (isspace(str[i]) && str[i])
			i++;
		while (!(isspace(str[i])) && str[i])
		{
			split[j] = ft_strdupword(&str[i]);
			i += ft_lenword(&str[i]);	
		}
		j++;
	}
	split[j] = 0;
	return (split);
}


int	count_words(char *str)
{
	int i = 0;
	int count = 0;
	while (str[i])
	{
		while (isspace(str[i]) && str[i])
			i++;
		if (!isspace(str[i]) && str[i])
		{
			count ++;
			while (!isspace(str[i]) && str[i])
				i++;
		}

	}
	return (count);
}

char *ft_strdupword(char *str)
{
	int len = 0;
	char *dup = NULL;
	while (!(isspace(str[len])) && str[len])
		len++;
	if (!(dup = malloc((len + 1) * sizeof(char))))
		return NULL;
	int i = 0;
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

int	ft_lenword(char *str)
{
	int i = 0;
	while (!(isspace(str[i]) && str[i]))
		i++;
	return (i);
}

#include <stdio.h>
int	main()
{
	char *str= " Allors on Dance, lets \t go \n dance";
	int count = count_words(str);
	char **split = malloc((count +1) * sizeof(char *));
	int i = 0;
	split = ft_split(str); 
	while (i < count_words(str))
		{
		printf("%s\n", split[i]);
		i++;
		}
	return (0);
}
