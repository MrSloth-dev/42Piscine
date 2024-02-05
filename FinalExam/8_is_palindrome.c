/*
 * Write a program that takes a string as argument and check if it's a palindrome. If it\s a palindrome, it displays it. If isn't display a new line.
 * If  number of arguments is not 1, display a new line.
 *
 */



#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}
int main(int argc, char *argv[])
{
	if (argc !=2)
	{
		write(1, "\n",1);
		return (1);
	}
	int i = 0;
	int len = ft_strlen(argv[1]);
	int diff = 0;
	while (i < len)
	{
		diff = argv[1][i] - argv[1][len - 1 - i ];
		if ( diff !=0 )
		{
			write(1, "\n", 1);
			return (1);
		}
		i++;
	}
	i = 0;
	while (argv[1][i] )
	{
		write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
}
