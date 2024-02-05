/*Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);
*/


int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;
	while((s1[i] || s2[i] && diff == 0))
	{
		diff = s1[i] - s2[i];
		if (diff !=0)
			return (diff);
		i++;
	}
	return (diff);
}
