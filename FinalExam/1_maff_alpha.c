/* Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.

Example:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$
*/



#include <unistd.h>


int	main()
{
	char l;
	char u;
	l = 'a';
	u = 'B';

	while (l < 'z' || u < 'Z')
	{
		write(1, &l, 1);
		write(1, &u, 1);
		l += 2;
		u += 2;
	}
	write(1, "\n", 1);
}
