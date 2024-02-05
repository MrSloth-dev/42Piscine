/*Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(char *str);*/

#define isspace(c) ((c == ' ' || c == '\t'))

int	ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	int neg = 1;

	while (isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * neg);
}


#include <stdio.h>

int	main()
{
	printf("%d", ft_atoi("42"));
	printf("\n");
	printf("%d", ft_atoi("-42"));
	printf("\n");
	printf("%d", ft_atoi("0"));
	printf("\n");
	printf("%d", ft_atoi("-2147483648"));
	printf("\n");
}
