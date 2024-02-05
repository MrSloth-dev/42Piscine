/* Write a function that takes a string as an argument and returns the count of the words. 
Words are strings of characters separated by spaces or the beggining/end of the string 

It should be like as follows:

int	count_words(char *str);
*/

#define isspace(c) ( c == ' ')

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
#include <stdio.h>
int	main()
{
	printf("%d", count_words("Hello my world and my friends"));
}
