/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:12:24 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/29 18:36:50 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);
int	ft_strlen(char *str);

char	*ft_strstr(char *str, char *find)
{
	int	n;
	int	i;

	i = 0;
	n = ft_strlen(find);
	if (n < 1)
		return (str);
	while (str[i])
	{
		if (ft_strcmp(str, find) == 0)
			return (str);
		i++;
	}
	return (str);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;
	int	i;
	i = 0;
	diff = 0;
	while ((s2[i] || s1[i]) && diff == 0)
	{
		diff = s1[i] - s2[i];
		i++;
	}
	return (diff);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc != 3)
		return 1;
	printf("new string %s",ft_strstr(argv[1],argv[2]));
	return(0);
}


