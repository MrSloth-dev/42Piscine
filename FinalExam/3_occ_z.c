/*Write a function that takes a string and returns the numbers of occurencies of 'Z'.


Your function must be delcared as follows:

int	occ_z(char *str);*/



int	occ_z(char *str)
{
	int i = 0;
	int count  = 0;
	while (str[i])
	{
		if (str[i] == 'Z')
			count ++;
		i++;
	}
	return (count);
}
