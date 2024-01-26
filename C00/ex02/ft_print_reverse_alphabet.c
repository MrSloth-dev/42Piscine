#include <unistd.h>


void	ft_print_reverse_alphabet(void)
{
	char c;

	c = 'z';

	for ( c ; c >= 'a'; c --)
	{
		write(1, &c, 1);
	}
}
int main()
{
	ft_print_reverse_alphabet();
	return 0;
}
