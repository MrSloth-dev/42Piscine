/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-pol <joao-pol@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 03:02:43 by joao-pol          #+#    #+#             */
/*   Updated: 2024/01/16 12:30:42 by joao-pol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			alpha = 1;
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	char *str = "ohmeudeu";
	printf("text : ohmeudeu\n");
	printf(" return value is %d 1 is lower 0 is not\n", ft_str_is_lowercase(str));
	char *stri = "0hm3ud3u";
	printf("text : 0hm3ud3u\n");
	printf(" return value is %d 1 is lower 0 is not\n", ft_str_is_lowercase(stri));
	return (0);
}*/
