/* Write a function that takes an integer as argument and coverts into a string.
Note that it need to be able to display all possible numbers in integer range.



It should be defined as follow:
*/

#include <stdlib.h>

int ft_numlen(int nbr);
char *ft_itoa(int nbr)
{
	char *number = NULL;
	int i = 0;
	int len = ft_numlen(nbr);
	int neg = ( nbr < 0);

	if (!(number = malloc((len + neg + 1) * sizeof(char))))
		return (NULL);
	if (nbr == -2147483648)
	{
		number = "-2147483648";
		return (number);
	}
	else if (nbr == 0)
	{
		number = "0";
		return (number);
	}
	else if ( nbr < 0)
	{
		number[0] = '-';
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		number[len - i - !neg] = (nbr % 10) + '0';
		nbr /=10;
		i++;
	}
	number[len + neg] = 0;
	return (number);
}

int ft_numlen(int nbr)
{
	int i = 0;
	while (nbr !=0)
	{
		nbr /=10;
		i++;
	}
	return (i);
}


#include <stdio.h>

int	main()
{
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
}
