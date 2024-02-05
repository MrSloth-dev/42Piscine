/*Create a program that displays its given arguments.
One per line, in the same order as in the command line.
It should display first argument.
Example:
%> ./a.out test1 test2 test3 | cat -e
test1
%>*/

#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	int i = 0;
	while (argv[1][i])
	{
		write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
}
